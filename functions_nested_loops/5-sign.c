#include "main.h"

/**
 *main - Entry point
 *
 *Return: 1 +; 0 0; -1 -;
 */

int print_sign(int n)
{
  if (n > 0)
    {
      _puthcar('+');
      return (0);
    }
  else if (n = 0)
    {
      _putchar('0');
      return (0);
    }
  else if (n < 0)
    {
      _putchar('-');
      return (-1);
    }
}
