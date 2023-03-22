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
					if (m > 9)
					{
						_putchar(44);
						_putchar(32);
						_putchar(d + '0');
						_putchar(u + '0');	
					}
					else
					{
						_putchar(m + '0');
						if (j != 9)
						{
							_putchar(44);
							_putchar(32);
							_putchar(32);
						}
					}
				
		}
		_putchar('\n');
	}
}
