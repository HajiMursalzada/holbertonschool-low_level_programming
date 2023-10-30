#include "main.h"



void _puts_recursion(char *s)
{
  int i = 1;
  int dec = *s;
  if(dec)
    {
      _puts_recursion(s+1);
      dec = *(s + i);
      i++;
    }
  return dec;
}
