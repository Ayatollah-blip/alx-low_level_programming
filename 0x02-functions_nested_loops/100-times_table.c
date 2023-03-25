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
int i, j, m, d, u, dd, c;

if(!(n > 15) && !(n <= 0))
{
	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			m = i * j;
			if (m > 99)
			{
				u = m % 10;
				d = m / 10;
				dd = d % 10;
				c = d / 10;
				_putchar(44);
				_putchar(32);
				_putchar(c + '0');
				_putchar(dd + '0');
				_putchar(u + '0');
	
			}

			else if (m > 9 && m < 100)
			{
				u = m % 10;
				d = m / 10;
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
					_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
}
