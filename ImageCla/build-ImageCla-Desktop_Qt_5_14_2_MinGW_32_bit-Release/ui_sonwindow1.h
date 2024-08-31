/********************************************************************************
** Form generated from reading UI file 'sonwindow1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONWINDOW1_H
#define UI_SONWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sonwindow1
{
public:
    QLabel *label;

    void setupUi(QWidget *sonwindow1)
    {
        if (sonwindow1->objectName().isEmpty())
            sonwindow1->setObjectName(QString::fromUtf8("sonwindow1"));
        sonwindow1->resize(556, 402);
        label = new QLabel(sonwindow1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 541, 401));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/picture2.png")));
        label->setScaledContents(true);

        retranslateUi(sonwindow1);

        QMetaObject::connectSlotsByName(sonwindow1);
    } // setupUi

    void retranslateUi(QWidget *sonwindow1)
    {
        sonwindow1->setWindowTitle(QCoreApplication::translate("sonwindow1", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sonwindow1: public Ui_sonwindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONWINDOW1_H
