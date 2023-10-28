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
	dec = *s;
	i = 0;
	while (dec)
	{
	  i++;
	  dec = *(s + i); 
	}
	dec = *s;
	while (i > 0)
        {

                i--;
                dec = *(s + i);
                _putchar(dec);
        }

        _putchar('\n');
}
