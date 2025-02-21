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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Number1;
    QLabel *Number2;
    QLabel *Result;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *N1;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N7;
    QPushButton *N8;
    QPushButton *N9;
    QPushButton *N0;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *N4;
    QPushButton *mul;
    QPushButton *div;
    QPushButton *clear;
    QPushButton *enter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Number1 = new QLabel(centralwidget);
        Number1->setObjectName("Number1");
        Number1->setGeometry(QRect(20, 10, 71, 16));
        Number2 = new QLabel(centralwidget);
        Number2->setObjectName("Number2");
        Number2->setGeometry(QRect(100, 10, 71, 16));
        Result = new QLabel(centralwidget);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(180, 10, 71, 16));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(20, 30, 71, 20));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(100, 30, 71, 20));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(180, 30, 71, 20));
        result->setReadOnly(true);
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(20, 60, 51, 18));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(80, 90, 51, 18));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(140, 90, 51, 18));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(20, 120, 51, 18));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(80, 120, 51, 18));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(140, 120, 51, 18));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(20, 150, 51, 18));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(200, 60, 51, 18));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(200, 90, 51, 18));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(80, 60, 51, 18));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(140, 60, 51, 18));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(20, 90, 51, 18));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(200, 120, 51, 18));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(200, 150, 51, 18));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(80, 150, 51, 18));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(140, 150, 51, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
        Number1->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        Number2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        Result->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
