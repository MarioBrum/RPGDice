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
    inputBox = ui->inputBox;
    rollButton = ui->rollButton;
    resultLabel = ui->resultLabel;

    connect(rollButton, &QPushButton::clicked, this, &MainWindow::on_rollButton_clicked);
    connect(inputBox, &QTextEdit::textChanged, this, &MainWindow::on_inputBox_textChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::parseInput(const QString &input) {
    std::regex diceRegex("(\\d*)d(\\d+)([+-]\\d+)?");
    std::smatch match;

    std::string inputStr = input.toStdString();
    if (std::regex_match(inputStr, match, diceRegex)) {
        repeat = match[1].str().empty() ? 1 : std::stoi(match[1].str());
        dice = std::stoi(match[2].str());
        multiplier = match[3].str().empty() ? 0 : std::stoi(match[3].str());
    } else {
        repeat = 1;
        dice = 6;
        multiplier = 0;
    }
}

/*
multiplier is the number summed to a dice
dice is the max number a dice can roll
repeat is the number of times a dice like that rolls
*/

int MainWindow::rolling() {
    int sum = 0;
    int number = 0;
    if (repeat <= 0 || dice <= 1) {
        return -1;
    }
    for (int i = 0; i < repeat; ++i) {
        number = (rand() % dice) + 1;
        sum += number;
    }
    sum += multiplier;
    return sum;
}

void MainWindow::on_rollButton_clicked() {
    QString input = inputBox->toPlainText();
    parseInput(input);
    int result = rolling();
    resultLabel->setText(QString::number(result));
}

void MainWindow::on_inputBox_textChanged()
{
    QString input = inputBox->toPlainText();
    if (input.isEmpty()) {
        // Se o campo estiver vazio, definir um valor padrão
        input = "1d6+0";
        inputBox->setText(input);
    }
    input = inputBox->toPlainText();
    parseInput(input);
}



