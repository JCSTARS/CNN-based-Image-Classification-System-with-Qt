#include "sonwindow3.h"
#include "ui_sonwindow3.h"

sonwindow3::sonwindow3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sonwindow3)
{
    ui->setupUi(this);
}

sonwindow3::~sonwindow3()
{
    delete ui;
}
