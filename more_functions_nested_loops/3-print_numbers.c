#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int decimal = 48;

	for (; decimal <= 57 ; decimal++)
	{
		_putchar(decimal);
	}

	_putchar('\n');
}
