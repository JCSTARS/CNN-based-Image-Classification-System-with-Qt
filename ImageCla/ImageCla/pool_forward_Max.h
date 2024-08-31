#ifndef POOL_FORWARD_MAX_H
#define POOL_FORWARD_MAX_H

#pragma once
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

void pool_forward_Max(QVector<QVector<QVector<double>>> a_prev, int f,
    int stride, QVector<QVector<QVector<double>>>& Z,
    int n_H_prev, int n_W_prev, int n_C_prev);

#endif // POOL_FORWARD_MAX_H
