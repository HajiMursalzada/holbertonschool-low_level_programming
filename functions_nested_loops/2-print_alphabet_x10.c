#include "main.h"
/**
 *print_alphabet
 *
 *Return
 */

void print_alphabet_x10(void);
{
  char i;
  char ch = 'a';
  while(i < 10)
    {
      i = 0;
      while (ch <= 'z')
	{
	  _putchar(ch);
	  ch++;
	}
      _putchar('\n');
      ch = 'a';
      i++;
    }
}
