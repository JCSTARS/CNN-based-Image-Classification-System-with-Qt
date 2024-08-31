#include "sonwindow4.h"
#include "ui_sonwindow4.h"

sonwindow4::sonwindow4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sonwindow4)
{
    ui->setupUi(this);
}

sonwindow4::~sonwindow4()
{
    delete ui;
}
