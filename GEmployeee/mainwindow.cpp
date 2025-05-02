#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QPdfWriter>
#include <QPainter>
#include <QPageLayout>
#include <QPageSize>
#include <QSortFilterProxyModel>
#include <QRegularExpression>
#include <QSqlQueryModel>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QDebug>
#include <QWidget>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>      // si tu veux logger les erreurs
#include <QtSql/QSqlDatabase>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsTextItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      proxyModel(new QSortFilterProxyModel(this))//recherche dynamique
{
    ui->setupUi(this);
    arduino = new Arduino(this);
    if (arduino->connectArduino()) {
        connect(arduino, &Arduino::dataReceived, this, &MainWindow::traiterInputDepuisArduino);
    }

    // Initialisation de la scène pour le graphique en camembert
    scene = new QGraphicsScene(this);
        ui->graphicsView->setScene(scene);

        // Afficher le graphique
        setupPieChart();
    updateModel();

    connect(ui->exportPDFButton, &QPushButton::clicked, this, &MainWindow::on_exportPDFButton_clicked);
    connect(ui->triComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_triComboBox_currentIndexChanged);

    connect(ui->lineEditRecherche, &QLineEdit::textChanged, this, [this](const QString &text){
        proxyModel->setFilterKeyColumn(-1);
        proxyModel->setFilterRegularExpression(QRegularExpression(text, QRegularExpression::CaseInsensitiveOption));
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ajouterButton_clicked()
{
    int id = ui->lineEdit_ID->text().toInt();
    QString nom = ui->lineEdit_NOM->text();
    QString email = ui->lineEdit_EMAIL->text();
    int tel = ui->lineEdit_TEL->text().toInt();
    QString adr = ui->lineEdit_ADR->text();

    Client c(id, nom, email, tel, adr);
    if (c.ajouter()) {
        QMessageBox::information(this, "Succès", "Client ajouté ou mis à jour !");
    } else {
        QMessageBox::critical(this, "Erreur", "Ajout ou mise à jour échouée !");
    }
    setupPieChart();
    updateModel();
}

void MainWindow::on_supprimerButton_clicked()
{
    int id = ui->lineEdit_ID_2->text().toInt();
    Client c;
    if (c.supprimer(id)) {
        QMessageBox::information(this, "Succès", "Client supprimé.");
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la suppression.");
    }
    setupPieChart();
    updateModel();
}

void MainWindow::on_modifierButton_clicked()
{
    int id = ui->lineEdit_ID_3->text().toInt();
    QString nom = ui->lineEdit_NOM_2->text();
    QString email = ui->lineEdit_EMAIL_2->text();
    int tel = ui->lineEdit_TEL_2->text().toInt();
    QString adresse = ui->lineEdit_ADR_2->text();


    Client c;
    if (c.IDExists(id)) {
        if (c.modifier(id, nom, email, tel, adresse)) {
            QMessageBox::information(this, "Succès", "Client modifié.");
        } else {
            QMessageBox::warning(this, "Erreur", "Échec de la modification.");
        }
    } else {
        QMessageBox::warning(this, "Erreur", "ID introuvable.");
    }
    setupPieChart();
    updateModel();
}

void MainWindow::on_exportPDFButton_clicked()
{
    exportTableViewToPDF(ui->tableView);
}

void MainWindow::exportTableViewToPDF(QTableView *tableView)
{
    QString fileName = QFileDialog::getSaveFileName(this, "Exporter en PDF", "", "PDF Files (*.pdf)");
    if (fileName.isEmpty()) return;

    QPdfWriter writer(fileName);
    writer.setPageSize(QPageSize::A4);
    writer.setResolution(300);
    QPainter painter(&writer);
    QAbstractItemModel *model = tableView->model();

    int x = 10, y = 30, rowHeight = 50, columnWidth = 200;
    QFont font = painter.font();
    font.setPointSize(7);
    painter.setFont(font);

    for (int col = 0; col < model->columnCount(); col++) {
        QRect rect(x + col * columnWidth, y, columnWidth, rowHeight);
        painter.drawText(rect, Qt::AlignCenter, model->headerData(col, Qt::Horizontal).toString());
        painter.drawRect(rect);
    }

    for (int row = 0; row < model->rowCount(); row++) {
        for (int col = 0; col < model->columnCount(); col++) {
            QRect rect(x + col * columnWidth, y + (row + 1) * rowHeight, columnWidth, rowHeight);
            painter.drawText(rect, Qt::AlignCenter, model->data(model->index(row, col)).toString());
            painter.drawRect(rect);
        }
    }

    painter.end();
    QMessageBox::information(this, "Export PDF", "Export terminé.");
}

void MainWindow::on_triComboBox_currentIndexChanged(int index)
{
    QSqlQueryModel* model = nullptr;
    Client c;
    if (index == 0) {
        model = c.trierParNom();
    } else if (index == 1) {
        model = c.trierParNom();
    }

    if (model) {
        proxyModel->setSourceModel(model);
        ui->tableView->setModel(proxyModel);
    }
}

void MainWindow::updateModel()
{
    Client c;
    QSqlQueryModel* model = c.afficher();

    if (model->rowCount() == 0) {
        qDebug() << "Aucune donnée trouvée dans la table CLIENT.";
    } else {
        qDebug() << "Nombre de lignes récupérées :" << model->rowCount();
    }

    proxyModel->setSourceModel(model);
    ui->tableView->setModel(proxyModel);
}

void MainWindow::setupPieChart()
{
    QGraphicsScene *scene = ui->graphicsView->scene();
    scene->clear(); // Effacer tout ancien dessin

    int totalClients = 0;
    int counts[6] = {0}; // NORMAL, FIDELE 5%, 10%, 15%, 20%, 25%

    // Obtenir le total de clients
    QSqlQuery query;
    query.exec("SELECT COUNT(*) FROM CLIENT");
    if (query.next()) totalClients = query.value(0).toInt();

    // Compter les clients selon le type
    query.exec("SELECT TYPE_CLI, COUNT(*) FROM CLIENT GROUP BY TYPE_CLI");
    while (query.next()) {
        QString type = query.value(0).toString();
        int cnt = query.value(1).toInt();
        if (type == "NORMAL") counts[0] = cnt;
        else if (type.startsWith("FIDELE 5%")) counts[1] = cnt;
        else if (type.startsWith("FIDELE 10%")) counts[2] = cnt;
        else if (type.startsWith("FIDELE 15%")) counts[3] = cnt;
        else if (type.startsWith("FIDELE 20%")) counts[4] = cnt;
        else if (type.startsWith("FIDELE 25%")) counts[5] = cnt;
    }

    if (totalClients == 0) {
        qDebug() << "Aucun client à afficher.";
        return;
    }

    // Définir couleurs et étiquettes
    QVector<QColor> colors = { Qt::gray, Qt::green, Qt::yellow, Qt::blue, Qt::red, Qt::cyan };
    QVector<QString> labels = { "NORMAL", "FIDELE 5%", "FIDELE 10%", "FIDELE 15%", "FIDELE 20%", "FIDELE 25%" };

    // Préparer les segments à afficher
    QVector<int> validIndexes;
    QVector<double> angleSpans;

    for (int i = 0; i < 6; ++i) {
        if (counts[i] > 0) {
            validIndexes.append(i);
            angleSpans.append((counts[i] / double(totalClients)) * 360.0);
        }
    }

    // Dessiner les segments
    double startAngle = 0;
    int radius = 100;

    for (int k = 0; k < validIndexes.size(); ++k) {
        int i = validIndexes[k];
        double span = angleSpans[k];

        // Dessiner la part
        QGraphicsEllipseItem *slice = scene->addEllipse(-radius, -radius, radius * 2, radius * 2,
                                                        QPen(Qt::black), QBrush(colors[i]));
        slice->setStartAngle(startAngle * 16);
        slice->setSpanAngle(span * 16);

        // Calculer l’angle du centre de la part
        double midAngle = startAngle + span / 2;
        double rad = midAngle * M_PI / 180.0;
        double textX = cos(rad) * radius * 1.2;
        double textY = sin(rad) * radius * 1.2;

        // Ajouter texte avec pourcentage
        double percent = (counts[i] / double(totalClients)) * 100.0;
        QString label = labels[i] + "\n" + QString::number(percent, 'f', 1) + "%";
        QGraphicsTextItem *textItem = scene->addText(label);
        QRectF textRect = textItem->boundingRect();
        textItem->setPos(textX - textRect.width() / 2, textY - textRect.height() / 2);
        textItem->setDefaultTextColor(Qt::black);

        startAngle += span;
    }

    // Ajuster la vue
    ui->graphicsView->fitInView(scene->itemsBoundingRect(), Qt::KeepAspectRatio);
}

void MainWindow::traiterInputDepuisArduino(const QString& input) {
    qDebug() << "📥 Donnée reçue d'Arduino:" << input;

    if (input.contains("*1#")) {
        QString idStr = input.section("*", 0, 0).trimmed();
        bool ok;
        int id = idStr.toInt(&ok);
        if (!ok) {
            QMessageBox::warning(this, "Erreur", "ID invalide reçu.");
            return;
        }

        Client client;
        if (client.IDExists(id)) {
            QSqlQuery query;
            query.prepare("SELECT EMAIL_CLI FROM CLIENT WHERE ID_CLI = :id");
            query.bindValue(":id", id);
            if (query.exec() && query.next()) {
                QString email = query.value(0).toString();
                client = Client(id, "", email, 0, "");
                if (client.ajouter()) {
                    QMessageBox::information(this, "Fidélité", "✅ 1 point de fidélité ajouté !");
                    setupPieChart();
                    updateModel();
                } else {
                    QMessageBox::warning(this, "Erreur", "⚠️ Échec de mise à jour.");
                }
            }
        } else {
            QMessageBox::warning(this, "Erreur", "❌ Client introuvable.");
        }
    }
}
