#include "main.h"

/**
 * _isupper -  checks for a digit
 * @c: int
 *
 * Return: On success 1.
 *
 */

int _isdigit(int c)
{
	int a = "1";

	while (a <= "9")
	{
		if (c == a)
			return (1);
		a++;
	}

	return (0);
}
