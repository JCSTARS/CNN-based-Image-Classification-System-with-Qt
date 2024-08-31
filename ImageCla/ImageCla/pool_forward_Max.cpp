#include "pool_forward_Max.h"

void pool_forward_Max(QVector<QVector<QVector<double>>> a_prev, int f,
    int stride, QVector<QVector<QVector<double>>>& Z,
    int n_H_prev, int n_W_prev, int n_C_prev)
{
    int n_H = int(1 + (n_H_prev - f) / stride);
    int n_W = int(1 + (n_W_prev - f) / stride);
    int n_C = n_C_prev;
    for (int h = 0; h < n_H; h++)
    {
        int vert_start = h * stride;
        for (int w = 0; w < n_W; w++)
        {
            int horiz_start = w * stride;
            for (int c = 0; c < n_C; c++)
            {
                double tmp = -10000.0;
                for (int i = 0; i < f; i++)
                {
                    for (int j = 0; j < f; j++)
                    {
                        if (tmp < a_prev[vert_start + i][horiz_start + j][c])
                            tmp = a_prev[vert_start + i][horiz_start + j][c];
                    }
                }
                Z[h][w][c] = tmp;
            }
        }
    }
}
