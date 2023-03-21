#include "main.h"
#include <ctype.h>
/**
* jack_bauer - function
* Description: primt time in minutes
*
*
*
*/
void jack_bauer(void)
{
int i, j, k, l;

	for (i = 0; i < 3 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			for (k = 0; k < 6 ; k++)
			{
				for (l = 0; l < 10 ; l++)
				{
					if (i == 2 && j == 3 && k == 5 && l == 10)
						break;
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
				if (i == 2 && j == 3 && k == 5 && l == 10)
					break;
			}
			if (i == 2 && j == 3 && k == 5 && l == 10)
				break;
		}
		if (i == 2 && j == 3 && k == 5 && l == 10)
			break;
	}
}
