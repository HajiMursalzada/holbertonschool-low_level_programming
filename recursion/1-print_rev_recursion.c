#include "main.h"


void _print_rev_recursion(char *s)
{
  int dec = *s;
  _putchar(dec);
  -- dec;
  if (dec > 0)
    {
      _print_rev_recursion(dec);
    }
}
