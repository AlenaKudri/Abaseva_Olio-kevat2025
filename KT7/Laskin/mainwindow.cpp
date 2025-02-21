#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 1;
    number1 = "";
    number2 = "";
    resetLineEdits();

    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::N1_clicked);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::N2_clicked);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::N3_clicked);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::N4_clicked);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::N5_clicked);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::N6_clicked);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::N7_clicked);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::N8_clicked);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::N9_clicked);
    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::N0_clicked);
    connect(ui->add, &QPushButton::clicked, this, &MainWindow::add_clicked);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::sub_clicked);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::mul_clicked);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::div_clicked);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clear_clicked);
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::enter_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClick()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<< "Button name:" << name;

    if(state == 1)
    {
        number1 += name.last(1);
        ui->num1->setText(number1);
    }
    else
    {
        number2 += name.last(1);
        ui->num2->setText(number2);
    }
    qDebug()<<"number 1 = "<<number1<<Qt::endl;
    qDebug()<<"number 2 = "<<number2<<Qt::endl;
}

void MainWindow::clear_enterClick()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<< "Button name:" << name;

    if (name == "clear")
    {
        state = 1;
        number1 = "";
        number2 = "";
        resetLineEdits();
    }
    else
    {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();
        qDebug()<< "number 1 =" << n1<< " and number 2 = "<<n2 <<Qt::endl;

        switch(operand){
            case 0:
                result = n1 + n2;
                break;
            case 1:
                result = n1 - n2;
                break;
            case 2:
                result = n1 * n2;
                break;
            case 3:
                result = n1 / n2;
                break;
            default:
                qDebug()<<"Not a correct operand"<<Qt::endl;
        }
        ui->result->setText(QString::number(result));
    }
}
void MainWindow::asmdClick()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;
    if(name == "add")
    {
        operand = 0;
    }
    else if(name == "sub")
    {
        operand = 1;
    }
    else if(name == "mul")
    {
        operand = 2;
    }
    else if(name == "div")
    {
        operand = 3;
    }
    state = 2;
    qDebug()<<"operand = "<< operand << Qt::endl;

}

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

void MainWindow::N1_clicked()
{
    numberClick();
}

void MainWindow::N2_clicked()
{
    numberClick();
}

void MainWindow::N3_clicked()
{
    numberClick();
}

void MainWindow::N4_clicked()
{
    numberClick();
}

void MainWindow::N5_clicked()
{
    numberClick();
}

void MainWindow::N6_clicked()
{
    numberClick();
}

void MainWindow::N7_clicked()
{
    numberClick();
}

void MainWindow::N8_clicked()
{
    numberClick();
}

void MainWindow::N9_clicked()
{
    numberClick();
}

void MainWindow::N0_clicked()
{
    numberClick();
}

void MainWindow::add_clicked()
{
    asmdClick();
}

void MainWindow::sub_clicked()
{
    asmdClick();
}

void MainWindow::mul_clicked()
{
    asmdClick();
}

void MainWindow::div_clicked()
{
    asmdClick();
}

void MainWindow::clear_clicked()
{
    clear_enterClick();
}

void MainWindow::enter_clicked()
{
    clear_enterClick();
}
