#include "Dense.h"

QString Dense(QVector<double> Flat, QVector<QVector<double>> W_d, QVector<double> b_d,
    int Class_prev, int Class, double& acc)
{
    double ans[6] = { 0.0 }, sum = 0, Max = -1000;
    int Max_num = 0;
    for (int i = 0; i < Class; i++)
    {
        for (int j = 0; j < Class_prev; j++)
        {
            ans[i] += W_d[j][i] * Flat[j];
        }
        ans[i] += b_d[i];
        ans[i] = pow(2.71828183, ans[i]);
        //return QString::number(ans[i]);
        sum += ans[i];
        if (ans[i] > Max)
        {
            Max = ans[i];
            Max_num = i;
        }
    }
    acc = Max / sum;
    switch (Max_num)
    {
        case 0:
            return "Mountain";
            break;
        case 1:
            return "Street";
            break;
        case 2:
            return "Glacier";
            break;
        case 3:
            return "building";
            break;
        case 4:
            return "Sea";
            break;
        case 5:
            return "Forest";
            break;
    }
    return "Please send another picture";
}
