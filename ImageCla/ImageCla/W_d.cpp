#include "W_d.h"
#include "parameter.h"

void w_d(double tx)
{
    for (u = 0; u < num; u++)
        for (o = 0; o < opt; o++)
        {
            in >> tx;
            W_d[u][o] = tx;
        }
}
