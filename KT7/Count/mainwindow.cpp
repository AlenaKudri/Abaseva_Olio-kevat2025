#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), count(0)
{
    ui->setupUi(this);
    ui->lineEdit->setText(QString::number(count));
    ui->lineEdit->setReadOnly(true);

    connect(ui->countButton, &QPushButton::clicked, this, &MainWindow::countButton_clicked);
    connect(ui->resetButton, &QPushButton::clicked, this, &MainWindow::resetButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::countButton_clicked()
{
    count++;
    ui->lineEdit->setText(QString::number(count));
}

void MainWindow::resetButton_clicked()
{
    count = 0;
    ui->lineEdit->setText(QString::number(count));
}
