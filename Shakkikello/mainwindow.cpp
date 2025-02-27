#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setGameInfoText("Select playtime and press start game",10);

    connect(ui->splayer1, &QPushButton::clicked, this, &MainWindow::splayer1_clicked);
    connect(ui->splayer2, &QPushButton::clicked, this, &MainWindow::splayer2_clicked);
    connect(ui->sec120, &QPushButton::clicked, this, &MainWindow::sec120_clicked);
    connect(ui->min5, &QPushButton::clicked, this, &MainWindow::min5_clicked);
    connect(ui->start, &QPushButton::clicked, this, &MainWindow::start_clicked);
    connect(ui->stop, &QPushButton::clicked, this, &MainWindow::stop_clicked);

    pQTimer = new QTimer (this);
    connect(pQTimer, &QTimer::timeout,
            this, &MainWindow::timeout);

    ui->player1time->setValue(0);
    ui->player2time->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gameTime_clicked()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    setGameInfoText("ready to play", 10);
    qDebug()<< "Button name:" << name;

    if (name == "sec120")
    {
        gameTime = 120;    
    }
    else if (name == "min5")
    {
        gameTime = 300;
    }
    updateProgressBar();
}

void MainWindow::updateProgressBar()
{
    if (gameTime > 0)
    {
        ui->player1time->setMaximum(gameTime);
        ui->player2time->setMaximum(gameTime);
    }

    ui->player1time->setValue(player1Time);
    ui->player2time->setValue(player2Time);

}

void MainWindow::timeout()
{
    if (currentPlayer == 1)
    {
        if (player1Time > 0)
        {
            player1Time--;
            updateProgressBar();
        }
        else
        {
            pQTimer->stop();
            setGameInfoText("Player 2 WON!!!", 17);
        }
    }
    else if (currentPlayer == 2)
    {
        if (player2Time > 0)
        {
            player2Time--;
            updateProgressBar();
        }
        else
        {
            pQTimer->stop();
            setGameInfoText("Player 1 WON!!!", 17);
        }
    }
}

void MainWindow::setGameInfoText(QString cText, short fontSize)
{
    ui->CentralText->setText(cText);
    QFont font = ui->CentralText->font();
    font.setPointSize(fontSize);
    ui->CentralText->setFont(font);
}

void MainWindow::currentPlayer_clicked()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<< "Button name:" << name;

    if (name == "splayer1")
    {
        currentPlayer = 2;
        setGameInfoText("Current player 2", 10);
    }
    else
    {
       currentPlayer = 1;
        setGameInfoText("Current player 1", 10);
    }
}

void MainWindow::start_clicked()
{
    //setGameInfoText("Game ongoing", 7);

    currentPlayer = 1;

    setGameInfoText("Current player 1", 10);

    player1Time = gameTime;
    player2Time = gameTime;

    ui->player1time->setValue(player1Time);
    ui->player2time->setValue(player2Time);

    pQTimer->start(1000);
}

void MainWindow::sec120_clicked()
{
    gameTime_clicked();
}

void MainWindow::min5_clicked()
{
    gameTime_clicked();
}

void MainWindow::stop_clicked()
{
    pQTimer->stop();
    setGameInfoText("New game via start button", 10);
    player1Time = 0;
    player2Time = 0;
    updateProgressBar();
}

void MainWindow::splayer1_clicked()
{
    currentPlayer_clicked();
}
void MainWindow::splayer2_clicked()
{
    currentPlayer_clicked();
}
