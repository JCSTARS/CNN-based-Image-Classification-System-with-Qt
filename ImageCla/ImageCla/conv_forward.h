#ifndef CONV_FORWARD_H
#define CONV_FORWARD_H

#pragma once
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

void conv_forward(QVector<QVector<QVector<double>>> a_prev,
    QVector<QVector<QVector<QVector<double>>>> W, QVector<double> b,
    QVector<QVector<QVector<double>>> &Z, int stride, int n_H_prev, int n_W_prev,
    int n_C_prev, int f, int n_C);

#endif // CONV_FORWARD_H
