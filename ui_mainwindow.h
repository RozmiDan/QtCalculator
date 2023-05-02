/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *display;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_null;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_C;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_res;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *button_plus;
    QPushButton *button_mult;
    QPushButton *button_minus;
    QPushButton *button_divis;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(382, 512);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        display = new QLabel(centralWidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(0, 0, 381, 141));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(31);
        display->setFont(font);
        display->setLayoutDirection(Qt::RightToLeft);
        display->setAutoFillBackground(false);
        display->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 140, 381, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        button_7 = new QPushButton(widget);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("GOST type B"));
        font1.setPointSize(36);
        button_7->setFont(font1);
        button_7->setCheckable(false);

        horizontalLayout->addWidget(button_7);

        button_8 = new QPushButton(widget);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        sizePolicy1.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy1);
        button_8->setFont(font1);
        button_8->setCheckable(false);

        horizontalLayout->addWidget(button_8);

        button_9 = new QPushButton(widget);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        sizePolicy1.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy1);
        button_9->setFont(font1);
        button_9->setCheckable(false);

        horizontalLayout->addWidget(button_9);

        button_null = new QPushButton(widget);
        button_null->setObjectName(QString::fromUtf8("button_null"));
        sizePolicy1.setHeightForWidth(button_null->sizePolicy().hasHeightForWidth());
        button_null->setSizePolicy(sizePolicy1);
        button_null->setFont(font1);
        button_null->setCheckable(false);

        horizontalLayout->addWidget(button_null);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        button_4 = new QPushButton(widget);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        sizePolicy1.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy1);
        button_4->setFont(font1);
        button_4->setCheckable(false);

        horizontalLayout_2->addWidget(button_4);

        button_5 = new QPushButton(widget);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        sizePolicy1.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy1);
        button_5->setFont(font1);
        button_5->setCheckable(false);

        horizontalLayout_2->addWidget(button_5);

        button_6 = new QPushButton(widget);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        sizePolicy1.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy1);
        button_6->setFont(font1);
        button_6->setCheckable(false);

        horizontalLayout_2->addWidget(button_6);

        button_C = new QPushButton(widget);
        button_C->setObjectName(QString::fromUtf8("button_C"));
        sizePolicy1.setHeightForWidth(button_C->sizePolicy().hasHeightForWidth());
        button_C->setSizePolicy(sizePolicy1);
        button_C->setFont(font1);
        button_C->setCheckable(false);

        horizontalLayout_2->addWidget(button_C);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        button_1 = new QPushButton(widget);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        button_1->setEnabled(true);
        sizePolicy1.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy1);
        button_1->setFont(font1);
        button_1->setAutoFillBackground(false);
        button_1->setCheckable(false);

        horizontalLayout_3->addWidget(button_1);

        button_2 = new QPushButton(widget);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        sizePolicy1.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy1);
        button_2->setFont(font1);
        button_2->setCheckable(false);

        horizontalLayout_3->addWidget(button_2);

        button_3 = new QPushButton(widget);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        sizePolicy1.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy1);
        button_3->setFont(font1);
        button_3->setCheckable(false);

        horizontalLayout_3->addWidget(button_3);

        button_res = new QPushButton(widget);
        button_res->setObjectName(QString::fromUtf8("button_res"));
        sizePolicy1.setHeightForWidth(button_res->sizePolicy().hasHeightForWidth());
        button_res->setSizePolicy(sizePolicy1);
        button_res->setFont(font1);
        button_res->setCheckable(false);

        horizontalLayout_3->addWidget(button_res);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        button_plus = new QPushButton(widget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(button_plus);
        button_plus->setObjectName(QString::fromUtf8("button_plus"));
        sizePolicy1.setHeightForWidth(button_plus->sizePolicy().hasHeightForWidth());
        button_plus->setSizePolicy(sizePolicy1);
        button_plus->setFont(font1);
        button_plus->setCheckable(true);

        horizontalLayout_4->addWidget(button_plus);

        button_mult = new QPushButton(widget);
        buttonGroup->addButton(button_mult);
        button_mult->setObjectName(QString::fromUtf8("button_mult"));
        sizePolicy1.setHeightForWidth(button_mult->sizePolicy().hasHeightForWidth());
        button_mult->setSizePolicy(sizePolicy1);
        button_mult->setFont(font1);
        button_mult->setCheckable(true);

        horizontalLayout_4->addWidget(button_mult);

        button_minus = new QPushButton(widget);
        buttonGroup->addButton(button_minus);
        button_minus->setObjectName(QString::fromUtf8("button_minus"));
        sizePolicy1.setHeightForWidth(button_minus->sizePolicy().hasHeightForWidth());
        button_minus->setSizePolicy(sizePolicy1);
        button_minus->setFont(font1);
        button_minus->setCheckable(true);

        horizontalLayout_4->addWidget(button_minus);

        button_divis = new QPushButton(widget);
        buttonGroup->addButton(button_divis);
        button_divis->setObjectName(QString::fromUtf8("button_divis"));
        sizePolicy1.setHeightForWidth(button_divis->sizePolicy().hasHeightForWidth());
        button_divis->setSizePolicy(sizePolicy1);
        button_divis->setFont(font1);
        button_divis->setCheckable(true);

        horizontalLayout_4->addWidget(button_divis);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        display->setText(QString());
        button_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        button_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        button_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        button_null->setText(QApplication::translate("MainWindow", "0", nullptr));
        button_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        button_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        button_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        button_C->setText(QApplication::translate("MainWindow", "C", nullptr));
        button_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        button_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        button_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        button_res->setText(QApplication::translate("MainWindow", "=", nullptr));
        button_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        button_mult->setText(QApplication::translate("MainWindow", "*", nullptr));
        button_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        button_divis->setText(QApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
