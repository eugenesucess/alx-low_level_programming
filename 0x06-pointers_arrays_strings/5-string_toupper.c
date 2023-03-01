#include "main.h"

char *string_toupper(char *x)
{
  int len = 0;
  while( x[len])
  {
    if (x[len] >= 97 && x[len] <= 122)
    {
      x[len] -= 32;
    }
    len++;
  }
}
