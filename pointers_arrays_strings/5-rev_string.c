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
	i = 0;
	int revdec = *s;
	while (revdec)
	{
	  i++;
	  revdec = *(s + i); 
	}
	revdec = *s;
	while (i > 0)
        {

                i--;
                revdec = *(s + i);
                _putchar(revdec);
        }

        _putchar('\n');
}
