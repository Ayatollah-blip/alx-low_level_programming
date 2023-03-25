#include "main.h"
#include <ctype.h>
/**
* print_times_table - function
* Description: times table
*
*
*
*/
void print_times_table(int n)
{
int i, j, m, d, u;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			m = i * j;
			if (m > 9)
			{
				u = m % 10;
				d = m / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
			/*	if (j != 0)
				{*/
					_putchar(44);
					_putchar(32);
					_putchar(32);
			/*	}*/
					_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
