#include "Flatten.h"

void Flatten(QVector<QVector<QVector<double>>> a_prev, QVector<double>& Flat,
    int n_C, int n_W, int n_H)
{
    for (int h = 0; h < n_H; h++)
    {
        for (int w = 0; w < n_W; w++)
        {
            for (int c = 0; c < n_C; c++)
            {
                Flat[h * n_W * n_C + w * n_C + c] = a_prev[h][w][c];
            }
        }
    }
}
