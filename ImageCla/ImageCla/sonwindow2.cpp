#include "sonwindow2.h"
#include "ui_sonwindow2.h"

sonwindow2::sonwindow2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sonwindow2)
{
    ui->setupUi(this);
}

sonwindow2::~sonwindow2()
{
    delete ui;
}
