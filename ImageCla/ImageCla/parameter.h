#ifndef PARAMETER_H
#define PARAMETER_H

#pragma once
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;


// 创建QTextStream对象

extern QFile file;
extern QTextStream in;

extern int total_layer , max_para , total_class, max_unit ;
extern QVector<QVector<QVector<QVector<QVector<double>>>>> W_c;
extern QVector<QVector<double>> b_c;
extern QVector<QVector<double>> W_d;
extern QVector<double> b_d;

extern int s, c, w, h;
extern int S0 , C0 , W0 , H0 ;
extern double tx;
extern int S1 , C1 , W1 , H1 ;
extern int u, num , opt , o;


#endif // PARAMETER_H
