#include "W_c.h"
#include "parameter.h"


void w_c(double tx)
{


  for (h = 0; h < H0; h++)
      for (w = 0; w < W0; w++)
          for (c = 0; c < C0; c++)
              for (s = 0; s < S0; s++)
              {
                  in >> tx;
                  W_c[0][h][w][c][s] = tx;
              }
}
