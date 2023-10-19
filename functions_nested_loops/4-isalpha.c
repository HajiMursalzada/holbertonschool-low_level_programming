#include "main.h"

/**
 *_islower - checks for lowercase character
 *
 *@c: int
 *
 *Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
  int ch = 'a', 'A';
  int bh = 'z', 'Z';
  while (ch <= bh)
    {
      if (c == ch)
	{
	  return (1);
	}
      
      ch++;
    }
  
  return (0);
}
