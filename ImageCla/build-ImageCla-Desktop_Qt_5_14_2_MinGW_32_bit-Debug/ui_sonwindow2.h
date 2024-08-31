/********************************************************************************
** Form generated from reading UI file 'sonwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONWINDOW2_H
#define UI_SONWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sonwindow2
{
public:
    QLabel *label;

    void setupUi(QWidget *sonwindow2)
    {
        if (sonwindow2->objectName().isEmpty())
            sonwindow2->setObjectName(QString::fromUtf8("sonwindow2"));
        sonwindow2->resize(558, 446);
        label = new QLabel(sonwindow2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 1, 551, 441));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/picture3.png")));
        label->setScaledContents(true);

        retranslateUi(sonwindow2);

        QMetaObject::connectSlotsByName(sonwindow2);
    } // setupUi

    void retranslateUi(QWidget *sonwindow2)
    {
        sonwindow2->setWindowTitle(QCoreApplication::translate("sonwindow2", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sonwindow2: public Ui_sonwindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONWINDOW2_H
