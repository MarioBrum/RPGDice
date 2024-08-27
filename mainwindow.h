#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stdlib.h"
//#include "string"

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
    void on_rollButton_clicked();
    int roll(int repeat, int dice,int multiplier);

    void on_inputBox_textChanged();

private:
    Ui::MainWindow *ui;
    int result = 0;
    //String input = "";
};
#endif // MAINWINDOW_H
