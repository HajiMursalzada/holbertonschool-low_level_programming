#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line don't print 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
  int decimal = 48;
  
  for (; decimal <= 57 ; decimal++)
    {
      if(decimal != 2 && decimal != 4)
	  _putchar(decimal);
    }
  
  _putchar('\n');
}
