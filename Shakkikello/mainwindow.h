#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();

private slots:
    void updateProgressBar();
    void setGameInfoText(QString, short);


    void currentPlayer_clicked();
    void gameTime_clicked();

    void sec120_clicked();
    void min5_clicked();
    void start_clicked();
    void stop_clicked();
    void splayer1_clicked();
    void splayer2_clicked();


private:
    Ui::MainWindow *ui;
    short player1Time = 0;
    short player2Time = 0;
    short currentPlayer;
    short gameTime = 0;
    QString cText;

    QTimer * pQTimer;

};
#endif // MAINWINDOW_H
