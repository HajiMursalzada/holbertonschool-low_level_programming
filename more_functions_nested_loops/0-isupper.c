#include "main.h"

/**
 *_islower - checks for lowercase character
 *
 *@c: int
 *
 *Return: 1 if c is lowercase and 0 otherwise
 */

int _isupper(int c)
{
	int ch = 'A';

	while (ch <= 'Z')
	{
		if (c == ch)
		{
			return (1);
		}

		ch++;
	}

	return (0);
}
