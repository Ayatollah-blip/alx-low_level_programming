#include "main.h"
/**
* print_square - function
* Description: function that draw a square
*
* @n: parameter
*
*/
void print_square(int n)
{
int i, j;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
				_putchar('#');
		}
		_putchar('\n');
	}
}
}
