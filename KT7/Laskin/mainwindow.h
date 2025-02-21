#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private slots:
    void N1_clicked();
    void N2_clicked();
    void N3_clicked();
    void N4_clicked();
    void N5_clicked();
    void N6_clicked();
    void N7_clicked();
    void N8_clicked();
    void N9_clicked();
    void N0_clicked();
    void add_clicked();
    void sub_clicked();
    void mul_clicked();
    void div_clicked();
    void clear_clicked();
    void enter_clicked();

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state;
    float result;
    short operand;

    void numberClick();
    void clear_enterClick();
    void asmdClick();
    void resetLineEdits();

};
#endif // MAINWINDOW_H
