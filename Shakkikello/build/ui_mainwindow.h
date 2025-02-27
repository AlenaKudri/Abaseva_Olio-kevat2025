/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *splayer1;
    QPushButton *splayer2;
    QPushButton *sec120;
    QPushButton *min5;
    QPushButton *start;
    QPushButton *stop;
    QLabel *CentralText;
    QProgressBar *player1time;
    QProgressBar *player2time;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(486, 243);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        splayer1 = new QPushButton(centralwidget);
        splayer1->setObjectName("splayer1");
        splayer1->setGeometry(QRect(50, 60, 131, 21));
        splayer1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(0, 0, 0);"));
        splayer2 = new QPushButton(centralwidget);
        splayer2->setObjectName("splayer2");
        splayer2->setGeometry(QRect(280, 60, 131, 21));
        splayer2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(0, 0, 0);"));
        sec120 = new QPushButton(centralwidget);
        sec120->setObjectName("sec120");
        sec120->setGeometry(QRect(150, 120, 81, 21));
        sec120->setStyleSheet(QString::fromUtf8(""));
        min5 = new QPushButton(centralwidget);
        min5->setObjectName("min5");
        min5->setGeometry(QRect(240, 120, 91, 21));
        min5->setStyleSheet(QString::fromUtf8(""));
        start = new QPushButton(centralwidget);
        start->setObjectName("start");
        start->setGeometry(QRect(40, 150, 101, 21));
        start->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        stop = new QPushButton(centralwidget);
        stop->setObjectName("stop");
        stop->setGeometry(QRect(340, 150, 101, 21));
        stop->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 0);"));
        CentralText = new QLabel(centralwidget);
        CentralText->setObjectName("CentralText");
        CentralText->setEnabled(true);
        CentralText->setGeometry(QRect(20, 90, 431, 20));
        CentralText->setAutoFillBackground(false);
        CentralText->setAlignment(Qt::AlignmentFlag::AlignCenter);
        player1time = new QProgressBar(centralwidget);
        player1time->setObjectName("player1time");
        player1time->setGeometry(QRect(20, 20, 201, 31));
        player1time->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    background-color: #f0f0f0;\n"
"    text-align: center;\n"
"	color: black;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #9370DB;\n"
"    width: 10px;\n"
"}"));
        player1time->setValue(24);
        player2time = new QProgressBar(centralwidget);
        player2time->setObjectName("player2time");
        player2time->setGeometry(QRect(250, 20, 201, 31));
        player2time->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    background-color: #f0f0f0;\n"
"    text-align: center;\n"
"	color: black;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #9370DB;\n"
"    width: 10px;\n"
"}"));
        player2time->setValue(24);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 486, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        splayer1->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        splayer2->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        sec120->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        min5->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        CentralText->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
