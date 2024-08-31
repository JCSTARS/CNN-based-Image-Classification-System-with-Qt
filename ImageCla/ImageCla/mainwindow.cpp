#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "conv_single_step.h"
#include "conv_forward.h"
#include "Flatten.h"
#include "pool_forward_Max.h"
#include "Dense.h"
#include "parameter.h"
#include "W_c.h"
#include "B_c.h"
#include "W_c1.h"
#include "B_c1.h"
#include "W_d.h"
#include "B_d.h"
#include "sonwindow1.h"
#include "sonwindow2.h"
#include "sonwindow3.h"
#include "sonwindow4.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   //lambda写法
    connect(ui->actionopen, &QAction::triggered,[=](){
        filename = QFileDialog::getOpenFileName(this, "选择图片", QCoreApplication::applicationFilePath());
        if(filename.isEmpty())
        {
            QMessageBox::warning(this,"提示","请选择一张图片");
        }
        //将图片显示到当前界面
        QPixmap pix(filename);
        ui->label->setPixmap(pix);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}








void MainWindow::on_pushButton_clicked()
{
    QVector<QVector<QVector<double>>> A(150,QVector<QVector<double>>(150, QVector<double>(3)) );
    A = imageEncode::imageToRGB(filename);
    //qDebug("A100: %lf",A[1][0][0]);



    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "无法打开文件";
        //return 1;
    }





    w_c(tx);
    B_c(tx);
    w_c1(tx);
    B_c1(tx);
    w_d(tx);
    B_d(tx);


    file.close();
    int max_f = 150, max_c = 20;
    QVector<QVector<QVector<double>>> Z(max_f, QVector<QVector<double>>(max_f, QVector<double>(max_c)));
    int total_l = 3, max_p = 20;
    QVector<QVector<QVector<QVector<double>>>> Z1
        (total_l, QVector<QVector<QVector<double>>>(max_p, QVector<QVector<double>>
            (max_p, QVector<double>(max_p))));
    QVector<double> Flat((max_unit + 1) * total_class);
    conv_forward(A, W_c[0], b_c[0], Z, 1, 150, 150, 3, 4, 8);
    pool_forward_Max(Z, 8, 8, Z1[0], 147, 147, 8);
    conv_forward(Z1[0], W_c[1], b_c[1], Z1[1], 1, 18, 18, 8, 2, 16);
    pool_forward_Max(Z1[1], 4, 4, Z1[2], 17, 17, 16);
    //qDebug("Z12000%lf ", Z1[2][0][0][0]);
    Flatten(Z1[2], Flat, 16, 4, 4);
    double acc;
    ui->lineEdit->setText(Dense(Flat, W_d, b_d, 256, 6, acc));
    //qDebug("%lf", acc);
    ui->lineEdit_2->setText("Accuracy = " + QString::number(acc));
    //std::cout << endl;
    //std::cout <<"Accuracy = "<< acc << endl;
}



void MainWindow::on_pushButton_2_clicked()
{
    sonwindow1 *image=new sonwindow1();
    image->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    sonwindow2 *image=new sonwindow2();
    image->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    sonwindow3 *image=new sonwindow3();
    image->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    sonwindow4 *image=new sonwindow4();
    image->show();
}
