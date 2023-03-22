#include "main.h"
#include <stdlib.h>
/**
* print_to_98 - function
* Description: print from n to 08
*
* @n:  parametre caracter to be started counting with
*
*
*/
void print_to_98(int n)
{
	int i, u, d, c, dd;
if ( n <= 98)
{
	for (i = n ; i < 99 ; i++)
	{
		if (i > 9)
		{
			u = i % 10;
			d = i / 10;
			_putchar(d + '0');
			_putchar(u + '0');
		}
		else
		{
			_putchar(i + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
else
{
	for (i = n ; i > 97 ; i--)
	{
		if (i > 99)
		{
			u = i % 10;
			d = i / 10;
			dd = d % 10;
			c = d / 10;
			_putchar(c + '0');
			_putchar(dd + '0');
			_putchar(u + '0');
		}
		else
		{
			u = i % 10;
			d = i / 10;
			_putchar(d + '0');
			_putchar(u + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
	_putchar('\n');
}
