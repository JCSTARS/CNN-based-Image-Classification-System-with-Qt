#ifndef CONV_SINGLE_STEP_H
#define CONV_SINGLE_STEP_H

#pragma once
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

double conv_single_step(QVector<QVector<QVector<double>>> a_slice_prev,
    QVector<QVector<QVector<double>>> W, double b, int n_C_prev, int f);

#endif // CONV_SINGLE_STEP_H
