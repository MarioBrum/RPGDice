#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QTextCharFormat"
#include "stdlib.h"

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

/*
multiplier is the number summed to a dice
dice is the max number a dice can roll
repeat is the number of times a dice like that rolls
*/
int roll(int repeat, int dice,int multiplier){
    int sum = 0;
    int number = 0;
    for(int i = 0; i < repeat; i++){
        number = rand() % dice;
        number += multiplier;
        sum += number;
    }
    return sum;
}

void MainWindow::on_rollButton_clicked()
{

}


void MainWindow::on_inputBox_textChanged()
{

}



