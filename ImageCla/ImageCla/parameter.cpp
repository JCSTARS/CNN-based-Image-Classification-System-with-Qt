#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parameter.h"
using namespace std;

QFile file("C:/Users/HP/Desktop/ImageCla2/ImageCla/parmeters.txt");
QTextStream in(&file);

int total_layer = 2, max_para = 18, total_class = 6, max_unit = 256;
QVector<QVector<QVector<QVector<QVector<double>>>>> W_c
(total_layer, QVector<QVector<QVector<QVector<double>>>>
    (max_para, QVector<QVector<QVector<double>>>
        (max_para, QVector<QVector<double>>
            (max_para, QVector<double>(max_para)))));
QVector<QVector<double>> b_c(total_layer, QVector<double>(max_para));
QVector<QVector<double>> W_d((max_unit + 1) * total_class, QVector<double>(total_class));
QVector<double> b_d(total_class);

int s, c, w, h;
int S0 = 8, C0 = 3, W0 = 4, H0 = 4;
double tx;
int S1 = 16, C1 = 8, W1 = 2, H1 = 2;
int u, num = 256, opt = 6, o;
