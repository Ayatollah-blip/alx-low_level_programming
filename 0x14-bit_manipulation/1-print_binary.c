#include "main.h"
/**
* print_binary - function that prints binary
*
* @n: number to be converted
*/

void print_binary(unsigned long int n)
{
	int i, conteur = 0;
	unsigned long int bit;

	for (i = 63; i >= 0; i--)
	{
		bit = n >> i;

		if (bit & 1)
		{
			_putchar('1');
			conteur++;
		}
		else if (conteur)
			_putchar('0');
	}
	if (!conteur)
		_putchar('0');
}

