#include "main.h"


void rev_string(char *s)
{
  int i = 1;
  int length = 0;
  int dec = *s;
  int a = *s;
  while (dec)
    {
      _putchar(dec);
      dec = *(s + i);
      i++;
    }
  
  _putchar('\n');
  
  while (a)
    {
      length++;
      a = *(s + i); 
    }
  a = *s;
  while (length > 0)
    {
      
      length--;
      a = *(s + length);
      _putchar(a);
    }
  
  _putchar('\n');
}
