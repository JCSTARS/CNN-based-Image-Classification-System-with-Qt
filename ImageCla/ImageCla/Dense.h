#ifndef DENSE_H
#define DENSE_H

#pragma once
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

QString Dense(QVector<double> Flat, QVector<QVector<double>> W_d, QVector<double> b_d,
    int Class_prev, int Class, double& acc);

#endif // DENSE_H
