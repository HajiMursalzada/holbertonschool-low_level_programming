#include "main.h"

/**
 * _isupper -  checks for uppercase character
 * @c: int
 *
 * Return: On success 1.
 *
 */

int _isupper(int c)
{
	int ch = "A";

	while (ch <= "Z")
	{
		if (c == ch)
			return (1);
		ch++;
	}

	return (0);
}
