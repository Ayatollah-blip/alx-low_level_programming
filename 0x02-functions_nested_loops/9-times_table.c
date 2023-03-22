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
					if(m < 10)
					{		
						_putchar(m + '0');
						_putchar(',');
						_putchar( ' ');
					}
					else
					{
						u = m % 10;
						d = m / 10;
						_putchar(d + '0');
						_putchar(u + '0');
						if (d != 9)
						{
							_putchar(',');
							_putchar(' ');
						}
					}
		}
		_putchar('\n');
	}
}
