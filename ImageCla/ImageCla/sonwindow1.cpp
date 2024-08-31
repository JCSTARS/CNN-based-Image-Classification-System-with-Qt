#include "sonwindow1.h"
#include "ui_sonwindow1.h"

sonwindow1::sonwindow1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sonwindow1)
{
    ui->setupUi(this);
}

sonwindow1::~sonwindow1()
{
    delete ui;
}
