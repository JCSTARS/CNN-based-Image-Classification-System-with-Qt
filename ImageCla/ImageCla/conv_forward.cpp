#include "conv_single_step.h"
#include "conv_forward.h"

void conv_forward(QVector<QVector<QVector<double>>> a_prev,
    QVector<QVector<QVector<QVector<double>>>> W, QVector<double> b,
    QVector<QVector<QVector<double>>> &Z, int stride, int n_H_prev, int n_W_prev,
    int n_C_prev, int f, int n_C)
{
    int n_H = int((n_H_prev - f) / stride) + 1;
    int n_W = int((n_W_prev - f) / stride) + 1;
    int h, w, c, vert_start, horiz_start;
    for(h = 0; h < n_H; h++)
        for (w = 0; w < n_W; w++)
        {
            vert_start = stride * h;
            horiz_start = stride * w;
            QVector<QVector<QVector<double>>> a_slice_prev;
            a_slice_prev.resize(f);
            for (int i = 0; i < f; i++)
            {
                a_slice_prev[i].resize(f);
                for (int j = 0; j < f; j++)
                    a_slice_prev[i][j].resize(n_C_prev);
            }
            for (int i = 0; i < f; i++)
            {
                for (int j = 0; j < f; j++)
                {
                    for (int k = 0; k < n_C_prev; k++)
                    {
                        a_slice_prev[i][j][k] = a_prev[vert_start + i][horiz_start + j][k];
                    }
                }
            }
            //if((h == (n_H-1))&&(w == n_W -1))
              //  qDebug("a_s_pffc %lf",a_slice_prev[f-1][f-1][n_C_prev-1]);
            QVector<QVector<QVector<double>>> w_slice;
            w_slice.resize(f);
            for (int i = 0; i < f; i++)
            {
                w_slice[i].resize(f);
                for (int j = 0; j < f; j++)
                    w_slice[i][j].resize(n_C_prev);
            }
            for (c = 0; c < n_C; c++)
            {
                for (int i = 0; i < f; i++)
                {
                    for (int j = 0; j < f; j++)
                    {
                        for (int k = 0; k < n_C_prev; k++)
                        {
                            w_slice[i][j][k] = W[i][j][k][c];
                        }
                    }
                }
                Z[h][w][c] = conv_single_step(a_slice_prev, w_slice, b[c], n_C_prev, f);
            }
            /*if((h == 0)&&(w == 0))
            {
                qDebug("bc %lf",b[n_C-1]);
                qDebug("zhwc %lf",Z[h][w][0]);
                qDebug("a_s %lf",a_slice_prev[1][0][0]);
            }*/
        }
}
