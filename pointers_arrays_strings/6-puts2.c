#include "main.h"


void puts2(char *str)
{
  int i = 0;
  int dec = *str;
  while (dec)
    {
      dec = *(str + i);
      i += 2;
      _putchar(dec);
    }
  _putchar('\n');
}
