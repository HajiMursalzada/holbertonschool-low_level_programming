#include "main.h"



void _puts_recursion(char *s)
{
  int i = 1;
  _puts_recursion = *s;
  return _puts_recursion *(s + i);
  i++
}
