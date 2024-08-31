#ifndef FLATTEN_H
#define FLATTEN_H

#pragma once
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

void Flatten(QVector<QVector<QVector<double>>> a_prev, QVector<double>& Flat,
    int n_C, int n_W, int n_H);

#endif // FLATTEN_H
