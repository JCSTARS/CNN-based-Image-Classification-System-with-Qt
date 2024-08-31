/********************************************************************************
** Form generated from reading UI file 'sonwindow4.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONWINDOW4_H
#define UI_SONWINDOW4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sonwindow4
{
public:
    QLabel *label;

    void setupUi(QWidget *sonwindow4)
    {
        if (sonwindow4->objectName().isEmpty())
            sonwindow4->setObjectName(QString::fromUtf8("sonwindow4"));
        sonwindow4->resize(497, 376);
        label = new QLabel(sonwindow4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 1, 491, 371));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/picture5.png")));
        label->setScaledContents(true);

        retranslateUi(sonwindow4);

        QMetaObject::connectSlotsByName(sonwindow4);
    } // setupUi

    void retranslateUi(QWidget *sonwindow4)
    {
        sonwindow4->setWindowTitle(QCoreApplication::translate("sonwindow4", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sonwindow4: public Ui_sonwindow4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONWINDOW4_H
