#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 *
 * @c: int
 *
 * Return: On success 1.
 */

int _isdigit(int c)
{
	int decimal = 48;

	while (decimal <= 57)
	{
		if (c == decimal)
			return (1);

		decimal++;
	}

	return (0);
}
