#include "B_d.h"
#include "parameter.h"

void B_d(double tx)
{
    for (o = 0; o < opt; o++)
    {
        in >> tx;
        b_d[o] = tx;
    }
}
