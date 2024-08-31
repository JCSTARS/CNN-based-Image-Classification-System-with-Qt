/********************************************************************************
** Form generated from reading UI file 'sonwindow3.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONWINDOW3_H
#define UI_SONWINDOW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sonwindow3
{
public:
    QLabel *label;

    void setupUi(QWidget *sonwindow3)
    {
        if (sonwindow3->objectName().isEmpty())
            sonwindow3->setObjectName(QString::fromUtf8("sonwindow3"));
        sonwindow3->resize(529, 407);
        label = new QLabel(sonwindow3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 1, 531, 401));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/picture4.png")));
        label->setScaledContents(true);

        retranslateUi(sonwindow3);

        QMetaObject::connectSlotsByName(sonwindow3);
    } // setupUi

    void retranslateUi(QWidget *sonwindow3)
    {
        sonwindow3->setWindowTitle(QCoreApplication::translate("sonwindow3", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sonwindow3: public Ui_sonwindow3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONWINDOW3_H
