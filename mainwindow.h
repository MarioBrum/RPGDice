#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <regex>
#include <cstdlib>


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
    int rolling();
    void on_inputBox_textChanged();

private:
    void parseInput(const QString &input);
private:
    Ui::MainWindow *ui;
    int repeat = 1;
    int dice = 2;
    int multiplier = 0;
    QTextEdit *inputBox;
    QPushButton *rollButton;
    QLabel *resultLabel;
};
#endif // MAINWINDOW_H
