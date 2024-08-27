/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *rollButton;
    QTextEdit *inputBox;
    QLabel *result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(347, 196);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        rollButton = new QPushButton(centralwidget);
        rollButton->setObjectName("rollButton");
        rollButton->setGeometry(QRect(250, 20, 81, 41));
        rollButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        inputBox = new QTextEdit(centralwidget);
        inputBox->setObjectName("inputBox");
        inputBox->setGeometry(QRect(20, 10, 201, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Sans Serif")});
        font.setPointSize(27);
        inputBox->setFont(font);
        inputBox->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        inputBox->setInputMethodHints(Qt::InputMethodHint::ImhHiddenText|Qt::InputMethodHint::ImhMultiLine);
        inputBox->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        inputBox->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(120, 80, 101, 61));
        result->setFont(font);
        result->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        result->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
        result->setTextFormat(Qt::TextFormat::PlainText);
        result->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 347, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RPGDice Manager", nullptr));
        rollButton->setText(QCoreApplication::translate("MainWindow", "ROLL", nullptr));
        inputBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "1d100+5", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
