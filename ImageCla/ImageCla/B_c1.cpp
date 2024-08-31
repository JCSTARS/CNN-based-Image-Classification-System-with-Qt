#include "B_c1.h"
#include "parameter.h"

void B_c1(double tx)
{
    for (s = 0; s < S1; s++)
    {
        in >> tx;
        b_c[1][s] = tx;
    }
}
