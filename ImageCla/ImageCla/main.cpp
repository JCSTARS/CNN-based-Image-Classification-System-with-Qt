#include "mainwindow.h"
#include "mainwindow1.h"
#include <QFile>
#include <QTextStream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow1 w;
    w.show();
    return a.exec();
}
