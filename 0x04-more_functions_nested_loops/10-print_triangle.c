#include "main.h"
/**
* print_triangle - function
* Description: function that print a triangle
*
* @size: parameter
*
*/
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (j > (size - i - 2))
			_putchar('#');
			else
			_putchar(' ');
		}
		_putchar('\n');
	}
}
}
