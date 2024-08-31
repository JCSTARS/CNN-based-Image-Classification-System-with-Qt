#include "conv_single_step.h"

int count_con_num = 0;
double conv_single_step(QVector<QVector<QVector<double>>> a_slice_prev,
    QVector<QVector<QVector<double>>> W, double b, int n_C_prev, int f)
{

    double Zans = 0.0;
    for (int i = 0; i < f; i++)
        for (int j = 0; j < f; j++)
            for (int k = 0; k < n_C_prev; k++)
                Zans += a_slice_prev[i][j][k] * W[i][j][k];

    Zans += b;

    if (count_con_num == 0)
    {
        count_con_num++;
        double cntt = 0.0;
        for (int i = 0; i < f; i++)
            for (int j = 0; j < f; j++)
                for (int k = 0; k < n_C_prev; k++)
                {
                    cntt += a_slice_prev[i][j][k] * W[i][j][k];
                    //if(cntt==-0.204381)
                    //    qDebug("ijk:%d %d %d",i,j,k);
                    //qDebug("cntt:%.10lf %.10lf %.10lf %d",a_slice_prev[i][j][k], W[i][j][k], cntt, f);
                }
        //qDebug("%.10lf ",a_slice_prev[0][1][0]);
    }

    if (Zans < 0.0)
        return 0.0;
    return Zans;
}

//a_prev是上一层的输出
//该函数会改变Z的值，Z就是下一层的输入(a_prev)，这一层的输出
