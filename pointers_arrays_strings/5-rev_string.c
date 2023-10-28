#include "main.h"


void rev_string(char *s)
{
  	int i = 1;
	int dec = *s;

	while (dec)
	{
		_putchar(dec);
		dec = *(s + i);
		i++;
	}

	_putchar('\n');

	int length = 0;
	int revdec = *str;

	while (revdec)
	{
		length++;
		revdec = *(str + length);
	}

	revdec = *str;

	while (length > 0)
	{

		length--;
		revdec = *(str + length);
		_putchar(revdec);
	}

	_putchar('\n');
}
