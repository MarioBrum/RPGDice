#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QTextCharFormat"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int roll(QString v){
    return 0;
}

void MainWindow::on_rollButton_clicked()
{

}


void MainWindow::on_inputBox_textChanged()
{

}



