#include "main.h"
#include <ctype.h>
/**
* print_last_digit - function
* Description: return last digit
*
* @c:  parametre caracter to be checked if lower case
*
* Return: last digit (int)
*
*/
int print_last_digit(int c)
{
	int m;

	if (c < 0)
		c = c * -1;
	m = c % 10;
	_putchar(m + '0');
	return (m);
}
