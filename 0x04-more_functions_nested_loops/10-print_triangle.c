#include "main.h"
/**
* print_triangle - function
* Description: function that print a triangle
*
* @n: parameter
*
*/
void print_triangle(int size)
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
		for (j = 0 ; j < n ; j++)
		{
			if (j > (n - i - 2))
			_putchar('#');
			else
			_putchar(' ');
		}
		_putchar('\n');
	}
}
}
