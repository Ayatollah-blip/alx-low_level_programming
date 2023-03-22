#include "main.h"
#include <ctype.h>
/**
* times_table - function
* Description: times table
*
*
*
*/
void times_table(void)
{
int i, j, m, d, u;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
					m=i*j;
					u = m % 10;
					d = m / 10;
					if (m < 10)
					{		
						_putchar(m + '0');
					
					}
					else
					{
						_putchar(d + '0');
						_putchar(u + '0');
					
					}
					if (j != 9 && d == 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else if (j != 9 && d != 0)
					{
						_putchar(',');
						_putchar(' ');
					}
		}
		_putchar('\n');
	}
}
