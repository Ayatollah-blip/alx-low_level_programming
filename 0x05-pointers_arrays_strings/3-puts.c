#include "main.h"

/**
* _puts - function
* Description: print a string
*
* @str: insert address that her value to be started length sum from
*/

void _puts(char *str)
{
	int p = 0;

while (*str != '\0')
{
	str++;
	_putchar(*str);
}
}
