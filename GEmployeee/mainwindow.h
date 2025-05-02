#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "arduino.h"

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include "client.h"
#include "qtableview.h"
#include <QGraphicsEllipseItem>
#include <QGraphicsTextItem>
#include <QBrush>
#include <QPen>
#include <QDebug>
#include <cmath>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QtSql/QSqlQuery>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateModel();
    void setupPieChart();

private slots:
    void on_ajouterButton_clicked();
    void on_supprimerButton_clicked();
    void on_modifierButton_clicked();
    void on_triComboBox_currentIndexChanged(int index);
    void on_exportPDFButton_clicked();

private:

    QGraphicsScene *scene;



    Ui::MainWindow *ui;
    QSortFilterProxyModel *proxyModel;
    void exportTableViewToPDF(QTableView* tableView);
    Arduino *arduino;
    void traiterInputDepuisArduino(const QString& input);

};

#endif // MAINWINDOW_H
