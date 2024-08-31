#include "W_c1.h"
#include "parameter.h"

void w_c1(double tx)
{
    for (h = 0; h < H1; h++)
        for (w = 0; w < W1; w++)
            for (c = 0; c < C1; c++)
                for (s = 0; s < S1; s++)
                {
                    in >> tx;
                    W_c[1][h][w][c][s] = tx;
                }
}
