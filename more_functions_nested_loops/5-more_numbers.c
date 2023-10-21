#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the numbrs, from 0 to 14
 *
 *Return: nothing
 */

void print_alphabet_x10(void)
{
	char ch = 0;
	int i = 0;

	while (i < 10)
	{
		while (ch < 15)
		{
			_putchar(ch = '0');
			ch++;
		}

		_putchar('\n');
		ch = 'a';
		i++;
	}

}
