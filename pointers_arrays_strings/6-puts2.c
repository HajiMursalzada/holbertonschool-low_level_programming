#include "main.h"


void puts2(char *str)
{
  int i = 0;
  int dec = *str;
  while (dec)
    {
      _putchar(dec);
      dec = *(str + i);
      i += 2;
    }
}
