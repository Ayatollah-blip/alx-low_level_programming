#include "main.h"
/**
* print_line - function
* Description: function that print a line
*
* @n: parameter
*
*/
void print_line(int n)
{
int i;

if (n == 0)
	_putchar('\n');
for (i = 0 ; i < n ; i++)
{
	_putchar('_');
}
_putchar('\n');
}
