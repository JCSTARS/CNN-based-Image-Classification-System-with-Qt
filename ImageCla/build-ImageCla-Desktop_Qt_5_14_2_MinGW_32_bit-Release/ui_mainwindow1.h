/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow1
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow1)
    {
        if (MainWindow1->objectName().isEmpty())
            MainWindow1->setObjectName(QString::fromUtf8("MainWindow1"));
        MainWindow1->resize(800, 600);
        centralwidget = new QWidget(MainWindow1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 490, 121, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font.setPointSize(12);
        pushButton->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 811, 431));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/picture1.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 490, 351, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font1.setPointSize(11);
        label_2->setFont(font1);
        MainWindow1->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow1->setStatusBar(statusbar);

        retranslateUi(MainWindow1);

        QMetaObject::connectSlotsByName(MainWindow1);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow1)
    {
        MainWindow1->setWindowTitle(QCoreApplication::translate("MainWindow1", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow1", "Continue", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow1", "Push the bottom to continue ->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow1: public Ui_MainWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
