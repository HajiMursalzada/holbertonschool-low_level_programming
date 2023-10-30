#include "main.h"



void _puts_recursion(char *s)
{
  _puts_recursion = *s;
  return _puts_recursion = _puts_recursion(*(s+1));
}
