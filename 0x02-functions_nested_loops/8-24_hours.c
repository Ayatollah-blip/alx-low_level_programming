#include "main.h"
#include <ctype.h>
/**
* jack_bauer - function
* Description: primt time in minutes
*
* @c:  parametre caracter to be checked if lower case
*
* Return: 0 (Fail) / 1 (Success)
*
*/
void jack_bauer(void)
{
	int i, j , k, l;

	for (i = 0; i < 3 ; i++)
	{
		for (j = 0; j < 4 ; j++)
		{
			for (k = 0; k < 6 ; k++)
			{
				for (l = 0; l < 10 ; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);	
					_putchar('\n');
				}
				
			}	
		}	
	}	
}
