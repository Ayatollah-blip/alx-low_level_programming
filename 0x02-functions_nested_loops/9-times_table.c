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
int i, j, m;

	for (i = 0; i < 3 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
					m=i*j;		
					_putchar(m + '0');
					_putchar(',');
					_putchar( ' ');

		}
		_putchar('\n');
	}
}
