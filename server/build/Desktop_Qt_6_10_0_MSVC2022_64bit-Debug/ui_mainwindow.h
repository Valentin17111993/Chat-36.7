/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineResult;
    QLCDNumber *lcdOperand;
    QGridLayout *gridLayout;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button9;
    QPushButton *buttonMult;
    QPushButton *buttonMinus;
    QPushButton *buttonEquals;
    QPushButton *buttonDevide;
    QPushButton *button0;
    QPushButton *button1;
    QPushButton *button8;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *buttonSign;
    QPushButton *button7;
    QPushButton *button2;
    QPushButton *buttonPlus;
    QPushButton *buttonBackspace;
    QPushButton *buttonClear;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        lineResult = new QLineEdit(centralwidget);
        lineResult->setObjectName("lineResult");
        QFont font;
        font.setPointSize(15);
        lineResult->setFont(font);
        lineResult->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineResult->setReadOnly(true);

        verticalLayout->addWidget(lineResult);

        lcdOperand = new QLCDNumber(centralwidget);
        lcdOperand->setObjectName("lcdOperand");
        lcdOperand->setMinimumSize(QSize(0, 90));

        verticalLayout->addWidget(lcdOperand);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        button3 = new QPushButton(centralwidget);
        button3->setObjectName("button3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy1);
        button3->setMinimumSize(QSize(60, 60));
        QFont font1;
        font1.setPointSize(25);
        button3->setFont(font1);

        gridLayout->addWidget(button3, 3, 2, 1, 1);

        button4 = new QPushButton(centralwidget);
        button4->setObjectName("button4");
        sizePolicy1.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy1);
        button4->setMinimumSize(QSize(60, 60));
        button4->setFont(font1);

        gridLayout->addWidget(button4, 2, 0, 1, 1);

        button9 = new QPushButton(centralwidget);
        button9->setObjectName("button9");
        sizePolicy1.setHeightForWidth(button9->sizePolicy().hasHeightForWidth());
        button9->setSizePolicy(sizePolicy1);
        button9->setMinimumSize(QSize(60, 60));
        button9->setFont(font1);

        gridLayout->addWidget(button9, 1, 2, 1, 1);

        buttonMult = new QPushButton(centralwidget);
        buttonMult->setObjectName("buttonMult");
        sizePolicy1.setHeightForWidth(buttonMult->sizePolicy().hasHeightForWidth());
        buttonMult->setSizePolicy(sizePolicy1);
        buttonMult->setMinimumSize(QSize(60, 60));
        buttonMult->setFont(font1);

        gridLayout->addWidget(buttonMult, 2, 3, 1, 1);

        buttonMinus = new QPushButton(centralwidget);
        buttonMinus->setObjectName("buttonMinus");
        sizePolicy1.setHeightForWidth(buttonMinus->sizePolicy().hasHeightForWidth());
        buttonMinus->setSizePolicy(sizePolicy1);
        buttonMinus->setMinimumSize(QSize(60, 60));
        buttonMinus->setFont(font1);

        gridLayout->addWidget(buttonMinus, 1, 3, 1, 1);

        buttonEquals = new QPushButton(centralwidget);
        buttonEquals->setObjectName("buttonEquals");
        sizePolicy1.setHeightForWidth(buttonEquals->sizePolicy().hasHeightForWidth());
        buttonEquals->setSizePolicy(sizePolicy1);
        buttonEquals->setMinimumSize(QSize(60, 60));
        buttonEquals->setFont(font1);

        gridLayout->addWidget(buttonEquals, 4, 3, 1, 1);

        buttonDevide = new QPushButton(centralwidget);
        buttonDevide->setObjectName("buttonDevide");
        sizePolicy1.setHeightForWidth(buttonDevide->sizePolicy().hasHeightForWidth());
        buttonDevide->setSizePolicy(sizePolicy1);
        buttonDevide->setMinimumSize(QSize(60, 60));
        buttonDevide->setFont(font1);

        gridLayout->addWidget(buttonDevide, 3, 3, 1, 1);

        button0 = new QPushButton(centralwidget);
        button0->setObjectName("button0");
        sizePolicy1.setHeightForWidth(button0->sizePolicy().hasHeightForWidth());
        button0->setSizePolicy(sizePolicy1);
        button0->setMinimumSize(QSize(60, 60));
        button0->setFont(font1);

        gridLayout->addWidget(button0, 4, 1, 1, 1);

        button1 = new QPushButton(centralwidget);
        button1->setObjectName("button1");
        sizePolicy1.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy1);
        button1->setMinimumSize(QSize(60, 60));
        button1->setFont(font1);

        gridLayout->addWidget(button1, 3, 0, 1, 1);

        button8 = new QPushButton(centralwidget);
        button8->setObjectName("button8");
        sizePolicy1.setHeightForWidth(button8->sizePolicy().hasHeightForWidth());
        button8->setSizePolicy(sizePolicy1);
        button8->setMinimumSize(QSize(60, 60));
        button8->setFont(font1);

        gridLayout->addWidget(button8, 1, 1, 1, 1);

        button5 = new QPushButton(centralwidget);
        button5->setObjectName("button5");
        sizePolicy1.setHeightForWidth(button5->sizePolicy().hasHeightForWidth());
        button5->setSizePolicy(sizePolicy1);
        button5->setMinimumSize(QSize(60, 60));
        button5->setFont(font1);

        gridLayout->addWidget(button5, 2, 1, 1, 1);

        button6 = new QPushButton(centralwidget);
        button6->setObjectName("button6");
        sizePolicy1.setHeightForWidth(button6->sizePolicy().hasHeightForWidth());
        button6->setSizePolicy(sizePolicy1);
        button6->setMinimumSize(QSize(60, 60));
        button6->setFont(font1);

        gridLayout->addWidget(button6, 2, 2, 1, 1);

        buttonSign = new QPushButton(centralwidget);
        buttonSign->setObjectName("buttonSign");
        sizePolicy1.setHeightForWidth(buttonSign->sizePolicy().hasHeightForWidth());
        buttonSign->setSizePolicy(sizePolicy1);
        buttonSign->setMinimumSize(QSize(60, 60));
        buttonSign->setFont(font1);

        gridLayout->addWidget(buttonSign, 4, 0, 1, 1);

        button7 = new QPushButton(centralwidget);
        button7->setObjectName("button7");
        sizePolicy1.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy1);
        button7->setMinimumSize(QSize(60, 60));
        button7->setFont(font1);

        gridLayout->addWidget(button7, 1, 0, 1, 1);

        button2 = new QPushButton(centralwidget);
        button2->setObjectName("button2");
        sizePolicy1.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy1);
        button2->setMinimumSize(QSize(60, 60));
        button2->setFont(font1);

        gridLayout->addWidget(button2, 3, 1, 1, 1);

        buttonPlus = new QPushButton(centralwidget);
        buttonPlus->setObjectName("buttonPlus");
        sizePolicy1.setHeightForWidth(buttonPlus->sizePolicy().hasHeightForWidth());
        buttonPlus->setSizePolicy(sizePolicy1);
        buttonPlus->setMinimumSize(QSize(60, 60));
        buttonPlus->setFont(font1);

        gridLayout->addWidget(buttonPlus, 0, 3, 1, 1);

        buttonBackspace = new QPushButton(centralwidget);
        buttonBackspace->setObjectName("buttonBackspace");
        sizePolicy1.setHeightForWidth(buttonBackspace->sizePolicy().hasHeightForWidth());
        buttonBackspace->setSizePolicy(sizePolicy1);
        buttonBackspace->setMinimumSize(QSize(60, 60));
        buttonBackspace->setFont(font1);

        gridLayout->addWidget(buttonBackspace, 0, 2, 1, 1);

        buttonClear = new QPushButton(centralwidget);
        buttonClear->setObjectName("buttonClear");
        sizePolicy1.setHeightForWidth(buttonClear->sizePolicy().hasHeightForWidth());
        buttonClear->setSizePolicy(sizePolicy1);
        buttonClear->setMinimumSize(QSize(60, 60));
        buttonClear->setFont(font1);

        gridLayout->addWidget(buttonClear, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 338, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineResult->setText(QString());
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        buttonMult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        buttonMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        buttonEquals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        buttonDevide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        buttonSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        buttonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        buttonBackspace->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
