#include "B_c.h"
#include "parameter.h"

void B_c(double tx)
{
  for (s = 0; s < S0; s++)
  {
      in >> tx;
      b_c[0][s] = tx;
  }
}
