/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *sidebar;
    QLabel *menuLabel;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_6;
    QFrame *frame_2;
    QFrame *frame_3;
    QLineEdit *lineEditRecherche;
    QPushButton *exportPDFButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QTableView *tableView;
    QComboBox *triComboBoxemploye;
    QLabel *label_18;
    QLabel *label_19;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QFrame *frame;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_NOM;
    QLineEdit *lineEdit_PRENOM;
    QLineEdit *lineEdit_MAIL;
    QLineEdit *lineEdit_TELEPHONE;
    QLineEdit *lineEdit_ADRESSE;
    QLineEdit *lineEdit_POSTE;
    QLabel *label_9;
    QDateEdit *dateEdit_DATE_EMBAUCHE;
    QPushButton *ajouterButton;
    QPushButton *btnAnnuler;
    QLineEdit *lineEdit_ID;
    QLabel *label_21;
    QLineEdit *lineEdit_MOT_DE_PASSE;
    QLabel *label_31;
    QWidget *tab;
    QFrame *frame_4;
    QLabel *label_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_NOM_2;
    QLineEdit *lineEdit_PRENOM_2;
    QLineEdit *lineEdit_MAIL_2;
    QLineEdit *lineEdit_TELEPHONE_2;
    QLineEdit *lineEdit_ADRESSE_2;
    QLineEdit *lineEdit_POSTE_2;
    QLabel *label_17;
    QPushButton *modifierButton;
    QPushButton *btnAnnuler_2;
    QLineEdit *lineEdit_ID_3;
    QLabel *label_22;
    QLabel *label_32;
    QLineEdit *lineEdit_MOT_DE_PASSE_2;
    QWidget *tab_3;
    QFrame *frame_5;
    QLabel *label_20;
    QPushButton *supprimerButton;
    QLineEdit *lineEdit_ID_2;
    QLabel *label_30;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1156, 643);
        MainWindow->setIconSize(QSize(250, 180));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sidebar = new QFrame(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setGeometry(QRect(0, 0, 151, 621));
        sidebar->setStyleSheet(QString::fromUtf8("QFrame#sidebar {\n"
"    background-color: #D3D3D3;  /* Gris clair */\n"
"    border-right: 2px solid #B0B0B0;\n"
" border-radius: 15px;\n"
"}"));
        sidebar->setFrameShape(QFrame::Shape::StyledPanel);
        sidebar->setFrameShadow(QFrame::Shadow::Raised);
        menuLabel = new QLabel(sidebar);
        menuLabel->setObjectName("menuLabel");
        menuLabel->setGeometry(QRect(10, 110, 81, 41));
        menuLabel->setStyleSheet(QString::fromUtf8("QLabel#menuLabel {\n"
"    color: #00008B;  /* Bleu fonc\303\251 */\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"}"));
        pushButton = new QPushButton(sidebar);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 160, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 16px; /* Change la taille selon tes besoins */\n"
"color: white;    /* Change la couleur selon tes besoins */\n"
"background-color: #00008B;\n"
"border: 2px solid blue; /* This will make it look like a rectangle */\n"
"border-radius: 10px; /* Adjust the value for more or less roundness */\n"
""));
        pushButton_2 = new QPushButton(sidebar);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 220, 111, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size: 16px; /* Change la taille selon tes besoins */\n"
"color: #00207F;    /* Change la couleur selon tes besoins */\n"
"background-color: #DEDFF5;\n"
"border: 2px solid blue; /* This will make it look like a rectangle */\n"
"border-radius: 10px; /* Adjust the value for more or less roundness */\n"
"\n"
"QPushButton {\n"
"    font-size: 16px; /* Change la taille selon tes besoins */\n"
"    color: #00207F; /* Couleur du texte */\n"
"    background-color: #DEDFF5; /* Couleur de fond */\n"
"    border: 2px solid blue; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"}\n"
""));
        pushButton_3 = new QPushButton(sidebar);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 290, 111, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("font-size: 16px; /* Change la taille selon tes besoins */\n"
"color: #00207F;    /* Change la couleur selon tes besoins */\n"
"background-color: #DEDFF5;\n"
"border: 2px solid blue; /* This will make it look like a rectangle */\n"
"border-radius: 10px; /* Adjust the value for more or less roundness */\n"
"\n"
"QPushButton {\n"
"    font-size: 16px; /* Change la taille selon tes besoins */\n"
"    color: #00207F; /* Couleur du texte */\n"
"    background-color: #DEDFF5; /* Couleur de fond */\n"
"    border: 2px solid blue; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"}\n"
""));
        pushButton_4 = new QPushButton(sidebar);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 360, 111, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("font-size: 16px; /* Change la taille selon tes besoins */\n"
"color: #00207F;    /* Change la couleur selon tes besoins */\n"
"background-color: #DEDFF5;\n"
"border: 2px solid blue; /* This will make it look like a rectangle */\n"
"border-radius: 10px; /* Adjust the value for more or less roundness */\n"
"\n"
"QPushButton {\n"
"    font-size: 16px; /* Change la taille selon tes besoins */\n"
"    color: #00207F; /* Couleur du texte */\n"
"    background-color: #DEDFF5; /* Couleur de fond */\n"
"    border: 2px solid blue; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"}\n"
""));
        pushButton_5 = new QPushButton(sidebar);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 430, 111, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("font-size: 16px; /* Change la taille selon tes besoins */\n"
"color: #00207F;    /* Change la couleur selon tes besoins */\n"
"background-color: #DEDFF5;\n"
"border: 2px solid blue; /* This will make it look like a rectangle */\n"
"border-radius: 10px; /* Adjust the value for more or less roundness */\n"
"\n"
"QPushButton {\n"
"    font-size: 16px; /* Change la taille selon tes besoins */\n"
"    color: #00207F; /* Couleur du texte */\n"
"    background-color: #DEDFF5; /* Couleur de fond */\n"
"    border: 2px solid blue; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"}\n"
""));
        pushButton_10 = new QPushButton(sidebar);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(0, 530, 141, 24));
        pushButton_10->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"background-color: rgb(85, 85, 85);\n"
"\n"
"font: 900 12pt \"Segoe UI\";\n"
""));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::SystemLogOut));
        pushButton_10->setIcon(icon);
        pushButton_6 = new QPushButton(sidebar);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(30, 0, 91, 101));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../Downloads/IMG_1634 (1).jpeg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(250, 160));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(150, 100, 1021, 541));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame#frame2 {\n"
"    background-color: #FFFFFF;  /* Blanc */\n"
"    border: 3px solid #E0E0E0;  /* Bordure l\303\251g\303\250re */\n"
"    border-radius: 5px;  /* Coins arrondis */\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(300, 0, 681, 501));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 139);"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        lineEditRecherche = new QLineEdit(frame_3);
        lineEditRecherche->setObjectName("lineEditRecherche");
        lineEditRecherche->setGeometry(QRect(10, 90, 501, 41));
        lineEditRecherche->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	font: 8pt \"Segoe UI\";\n"
"    background-color: #FFFFFF;  /* Fond blanc */\n"
"    color: #5f5f5f;  /* Texte noir */\n"
"      /* Texte en gras */\n"
"    padding-left: 30px;  /* Espace pour l\342\200\231ic\303\264ne */\n"
"    border: 2px solid #00008B;  /* Bordure bleue */\n"
"    border-radius: 5px;\n"
"width: 300px;  /* Largeur du champ */\n"
"    height: 100px;\n"
"}\n"
"\n"
"/* --- Ajouter une ic\303\264ne \303\240 gauche (background) --- */\n"
"QLineEdit {\n"
"    background-image: url(:/icon.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"    background-origin: content-box;\n"
"    padding-left: 30px;  /* Ajuste l'espace du texte */\n"
"}"));
        exportPDFButton = new QPushButton(frame_3);
        exportPDFButton->setObjectName("exportPDFButton");
        exportPDFButton->setGeometry(QRect(560, 160, 121, 24));
        exportPDFButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;  /* Fond blanc */\n"
"    color: #808080;           /* Texte gris (code hex pour gris) */\n"
"    font-weight: bold;        /* Texte en gras */\n"
"    border: 2px solid #808080; /* Bordure grise */\n"
"    padding: 5px 10px;        /* Espacement interne du bouton */\n"
"    border-radius: 5px;       /* Coins arrondis pour un aspect plus moderne */\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../Downloads/icons8-pdf-50.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        exportPDFButton->setIcon(icon2);
        exportPDFButton->setIconSize(QSize(20, 20));
        pushButton_9 = new QPushButton(frame_3);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(560, 130, 121, 24));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;  /* Fond blanc */\n"
"    color: #808080;           /* Texte gris (code hex pour gris) */\n"
"    font-weight: bold;        /* Texte en gras */\n"
"    border: 2px solid #808080; /* Bordure grise */\n"
"    padding: 5px 10px;        /* Espacement interne du bouton */\n"
"    border-radius: 5px;       /* Coins arrondis pour un aspect plus moderne */\n"
"}\n"
""));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpenRecent));
        pushButton_9->setIcon(icon3);
        pushButton_7 = new QPushButton(frame_3);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(560, 0, 121, 101));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../Downloads/photo.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_7->setIcon(icon4);
        pushButton_7->setIconSize(QSize(100, 100));
        tableView = new QTableView(frame_3);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(5, 230, 681, 261));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        triComboBoxemploye = new QComboBox(frame_3);
        triComboBoxemploye->addItem(QString());
        triComboBoxemploye->setObjectName("triComboBoxemploye");
        triComboBoxemploye->setGeometry(QRect(70, 150, 72, 24));
        label_18 = new QLabel(frame_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(20, 150, 49, 16));
        label_19 = new QLabel(frame_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(10, 50, 71, 21));
        tabWidget = new QTabWidget(frame_2);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 301, 501));
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        frame = new QFrame(tab_2);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, -30, 301, 551));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"    background-color: #00008B;  /* Bleu fonc\303\251 */\n"
"    border: 2px solid #000066;  /* Bordure l\303\251g\303\250rement plus fonc\303\251e */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 15px;  /* Espacement int\303\251rieur */\n"
"    color: #FFFFFF;  /* Texte blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 161, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"    color: #FFFFFF;  /* Texte blanc */\n"
"    font-size: 16px;  /* Taille du texte */\n"
"    font-weight: 600;  /* L\303\251g\303\250rement en gras (600 = semi-bold) */\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 110, 49, 16));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 150, 49, 16));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 190, 49, 16));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 240, 81, 16));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 280, 61, 16));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 340, 49, 16));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        lineEdit_NOM = new QLineEdit(frame);
        lineEdit_NOM->setObjectName("lineEdit_NOM");
        lineEdit_NOM->setGeometry(QRect(150, 110, 113, 24));
        lineEdit_NOM->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        lineEdit_PRENOM = new QLineEdit(frame);
        lineEdit_PRENOM->setObjectName("lineEdit_PRENOM");
        lineEdit_PRENOM->setGeometry(QRect(150, 150, 113, 24));
        lineEdit_PRENOM->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        lineEdit_MAIL = new QLineEdit(frame);
        lineEdit_MAIL->setObjectName("lineEdit_MAIL");
        lineEdit_MAIL->setGeometry(QRect(150, 190, 113, 24));
        lineEdit_MAIL->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        lineEdit_TELEPHONE = new QLineEdit(frame);
        lineEdit_TELEPHONE->setObjectName("lineEdit_TELEPHONE");
        lineEdit_TELEPHONE->setGeometry(QRect(150, 230, 113, 24));
        lineEdit_TELEPHONE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        lineEdit_ADRESSE = new QLineEdit(frame);
        lineEdit_ADRESSE->setObjectName("lineEdit_ADRESSE");
        lineEdit_ADRESSE->setGeometry(QRect(150, 280, 113, 24));
        lineEdit_ADRESSE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        lineEdit_POSTE = new QLineEdit(frame);
        lineEdit_POSTE->setObjectName("lineEdit_POSTE");
        lineEdit_POSTE->setGeometry(QRect(150, 330, 113, 24));
        lineEdit_POSTE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 380, 121, 16));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        dateEdit_DATE_EMBAUCHE = new QDateEdit(frame);
        dateEdit_DATE_EMBAUCHE->setObjectName("dateEdit_DATE_EMBAUCHE");
        dateEdit_DATE_EMBAUCHE->setGeometry(QRect(150, 370, 110, 25));
        dateEdit_DATE_EMBAUCHE->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #FFFFFF;  /* Fond blanc */\n"
"    color: #000000;  /* Texte (chiffres) en noir */\n"
"    border: 1px solid #B0B0B0;  /* Bordure gris clair */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* --- Fl\303\250che de s\303\251lection de date (down-arrow) --- */\n"
"QDateEdit::down-arrow {\n"
"    image: url(:/images/arrow_down.png);  /* Fl\303\250che personnalis\303\251e (si n\303\251cessaire) */\n"
"    width: 20px;\n"
"    height: 20px;\n"
"    color: #000000;  /* Fl\303\250ches en noir */\n"
"}\n"
"\n"
"/* --- Texte du calendrier qui s'affiche --- */\n"
"QDateEdit QCalendarWidget {\n"
"    background-color: #FFFFFF;  /* Fond blanc du calendrier */\n"
"    color: #000000;  /* Texte du calendrier en noir */\n"
"    border: 1px solid #B0B0B0;  /* Bordure gris clair du calendrier */\n"
"}\n"
"\n"
"/* --- \303\211l\303\251ments de s\303\251lection du calendrier --- */\n"
"QDateEdit QCalendarWidget::item {\n"
"    color: #000000;  /* Texte des jours en noir */"
                        "\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget::item:selected {\n"
"    background-color: #B0B0B0;  /* Fond gris clair pour l'\303\251l\303\251ment s\303\251lectionn\303\251 */\n"
"}\n"
""));
        ajouterButton = new QPushButton(frame);
        ajouterButton->setObjectName("ajouterButton");
        ajouterButton->setGeometry(QRect(160, 450, 111, 41));
        ajouterButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;  /* Fond blanc */\n"
"    color: #00008B;  /* Texte bleu fonc\303\251 */\n"
"    border: 2px solid #00008B;  /* Bordure bleu fonc\303\251 */\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;  /* Espace int\303\251rieur pour un bouton plus grand */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"}"));
        btnAnnuler = new QPushButton(frame);
        btnAnnuler->setObjectName("btnAnnuler");
        btnAnnuler->setGeometry(QRect(10, 450, 111, 41));
        btnAnnuler->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;  /* Fond blanc */\n"
"    color: #00008B;  /* Texte bleu fonc\303\251 */\n"
"    border: 2px solid #00008B;  /* Bordure bleu fonc\303\251 */\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;  /* Espace int\303\251rieur pour un bouton plus grand */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"}"));
        lineEdit_ID = new QLineEdit(frame);
        lineEdit_ID->setObjectName("lineEdit_ID");
        lineEdit_ID->setGeometry(QRect(150, 70, 113, 24));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        label_21 = new QLabel(frame);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(20, 70, 49, 16));
        label_21->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        lineEdit_MOT_DE_PASSE = new QLineEdit(frame);
        lineEdit_MOT_DE_PASSE->setObjectName("lineEdit_MOT_DE_PASSE");
        lineEdit_MOT_DE_PASSE->setGeometry(QRect(150, 410, 113, 24));
        lineEdit_MOT_DE_PASSE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        label_31 = new QLabel(frame);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(20, 410, 61, 16));
        label_31->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        frame_4 = new QFrame(tab);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 0, 301, 551));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"    background-color: #00008B;  /* Bleu fonc\303\251 */\n"
"    border: 2px solid #000066;  /* Bordure l\303\251g\303\250rement plus fonc\303\251e */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 15px;  /* Espacement int\303\251rieur */\n"
"    color: #FFFFFF;  /* Texte blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 161, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"    color: #FFFFFF;  /* Texte blanc */\n"
"    font-size: 16px;  /* Taille du texte */\n"
"    font-weight: 600;  /* L\303\251g\303\250rement en gras (600 = semi-bold) */\n"
"}"));
        label_11 = new QLabel(frame_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 110, 49, 16));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_12 = new QLabel(frame_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 150, 49, 16));
        label_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_13 = new QLabel(frame_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 190, 49, 16));
        label_13->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_14 = new QLabel(frame_4);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 240, 81, 16));
        label_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_15 = new QLabel(frame_4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 280, 61, 16));
        label_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_16 = new QLabel(frame_4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 340, 49, 16));
        label_16->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        lineEdit_NOM_2 = new QLineEdit(frame_4);
        lineEdit_NOM_2->setObjectName("lineEdit_NOM_2");
        lineEdit_NOM_2->setGeometry(QRect(150, 110, 113, 24));
        lineEdit_NOM_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        lineEdit_PRENOM_2 = new QLineEdit(frame_4);
        lineEdit_PRENOM_2->setObjectName("lineEdit_PRENOM_2");
        lineEdit_PRENOM_2->setGeometry(QRect(150, 150, 113, 24));
        lineEdit_PRENOM_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        lineEdit_MAIL_2 = new QLineEdit(frame_4);
        lineEdit_MAIL_2->setObjectName("lineEdit_MAIL_2");
        lineEdit_MAIL_2->setGeometry(QRect(150, 190, 113, 24));
        lineEdit_MAIL_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        lineEdit_TELEPHONE_2 = new QLineEdit(frame_4);
        lineEdit_TELEPHONE_2->setObjectName("lineEdit_TELEPHONE_2");
        lineEdit_TELEPHONE_2->setGeometry(QRect(150, 230, 113, 24));
        lineEdit_TELEPHONE_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        lineEdit_ADRESSE_2 = new QLineEdit(frame_4);
        lineEdit_ADRESSE_2->setObjectName("lineEdit_ADRESSE_2");
        lineEdit_ADRESSE_2->setGeometry(QRect(150, 280, 113, 24));
        lineEdit_ADRESSE_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        lineEdit_POSTE_2 = new QLineEdit(frame_4);
        lineEdit_POSTE_2->setObjectName("lineEdit_POSTE_2");
        lineEdit_POSTE_2->setGeometry(QRect(150, 330, 113, 24));
        lineEdit_POSTE_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        label_17 = new QLabel(frame_4);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(20, 380, 121, 16));
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        modifierButton = new QPushButton(frame_4);
        modifierButton->setObjectName("modifierButton");
        modifierButton->setGeometry(QRect(160, 450, 111, 41));
        modifierButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;  /* Fond blanc */\n"
"    color: #00008B;  /* Texte bleu fonc\303\251 */\n"
"    border: 2px solid #00008B;  /* Bordure bleu fonc\303\251 */\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;  /* Espace int\303\251rieur pour un bouton plus grand */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"}"));
        btnAnnuler_2 = new QPushButton(frame_4);
        btnAnnuler_2->setObjectName("btnAnnuler_2");
        btnAnnuler_2->setGeometry(QRect(10, 450, 111, 41));
        btnAnnuler_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;  /* Fond blanc */\n"
"    color: #00008B;  /* Texte bleu fonc\303\251 */\n"
"    border: 2px solid #00008B;  /* Bordure bleu fonc\303\251 */\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;  /* Espace int\303\251rieur pour un bouton plus grand */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"}"));
        lineEdit_ID_3 = new QLineEdit(frame_4);
        lineEdit_ID_3->setObjectName("lineEdit_ID_3");
        lineEdit_ID_3->setGeometry(QRect(150, 70, 113, 24));
        lineEdit_ID_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        label_22 = new QLabel(frame_4);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(20, 70, 49, 16));
        label_22->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        label_32 = new QLabel(frame_4);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(20, 380, 61, 16));
        label_32->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        lineEdit_MOT_DE_PASSE_2 = new QLineEdit(frame_4);
        lineEdit_MOT_DE_PASSE_2->setObjectName("lineEdit_MOT_DE_PASSE_2");
        lineEdit_MOT_DE_PASSE_2->setGeometry(QRect(150, 380, 113, 24));
        lineEdit_MOT_DE_PASSE_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        frame_5 = new QFrame(tab_3);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 0, 301, 551));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"    background-color: #00008B;  /* Bleu fonc\303\251 */\n"
"    border: 2px solid #000066;  /* Bordure l\303\251g\303\250rement plus fonc\303\251e */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 15px;  /* Espacement int\303\251rieur */\n"
"    color: #FFFFFF;  /* Texte blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_20 = new QLabel(frame_5);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(20, 20, 161, 51));
        label_20->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"    color: #FFFFFF;  /* Texte blanc */\n"
"    font-size: 16px;  /* Taille du texte */\n"
"    font-weight: 600;  /* L\303\251g\303\250rement en gras (600 = semi-bold) */\n"
"}"));
        supprimerButton = new QPushButton(frame_5);
        supprimerButton->setObjectName("supprimerButton");
        supprimerButton->setGeometry(QRect(90, 150, 111, 41));
        supprimerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;  /* Fond blanc */\n"
"    color: #00008B;  /* Texte bleu fonc\303\251 */\n"
"    border: 2px solid #00008B;  /* Bordure bleu fonc\303\251 */\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;  /* Espace int\303\251rieur pour un bouton plus grand */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"}"));
        lineEdit_ID_2 = new QLineEdit(frame_5);
        lineEdit_ID_2->setObjectName("lineEdit_ID_2");
        lineEdit_ID_2->setGeometry(QRect(150, 70, 113, 24));
        lineEdit_ID_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;  /* Gris tr\303\250s clair */\n"
"    border: 1px solid #B0B0B0;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));
        label_30 = new QLabel(frame_5);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(20, 70, 49, 16));
        label_30->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #FFFFFF;  /* Blanc */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}"));
        tabWidget->addTab(tab_3, QString());
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(440, 20, 311, 51));
        label_10->setStyleSheet(QString::fromUtf8("QLabel#label_10 {\n"
"    font-size: 32px;   /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    color: #00008B;    /* Bleu fonc\303\251 */\n"
"    padding: 10px;     /* Espace autour du texte */\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1156, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        menuLabel->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Employe", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Client", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Consultant", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Projet", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Formation", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "se deconnecter", nullptr));
        pushButton_6->setText(QString());
        lineEditRecherche->setText(QString());
        exportPDFButton->setText(QCoreApplication::translate("MainWindow", "exportation", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Planification", nullptr));
        pushButton_7->setText(QString());
        triComboBoxemploye->setItemText(0, QCoreApplication::translate("MainWindow", "date_d_embauche", nullptr));

        label_18->setText(QCoreApplication::translate("MainWindow", "trier par", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "Ajouter un employe", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Mail", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Poste ", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Date d'embauche", nullptr));
        ajouterButton->setText(QCoreApplication::translate("MainWindow", "VALIDER ", nullptr));
        btnAnnuler->setText(QCoreApplication::translate("MainWindow", "ANNULER", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Mdp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "ajout", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "modifier un employe", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Mail", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone ", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Poste ", nullptr));
        label_17->setText(QString());
        modifierButton->setText(QCoreApplication::translate("MainWindow", "VALIDER ", nullptr));
        btnAnnuler_2->setText(QCoreApplication::translate("MainWindow", "ANNULER", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Mdp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "modifier", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "supprimer un employe", nullptr));
        supprimerButton->setText(QCoreApplication::translate("MainWindow", "VALIDER ", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Smart Consult Pro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
