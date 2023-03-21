#include "main.h"
/**
* print_sign - function
* Description: check for lower case
*
* @c:  parametre caracter to be checked if lower case
*
* Return: 0 (Fail) / 1 (Success)
*
*/
int print_sign(int c)
{
	if (c > 0)
		{
		_putchar('+');
		return (1);
		}
	else if (c < 0)
		{
		_putchar('-');
		return (-1);
		}
	else
		{
		_putchar('0');
		return (0);
		}
}
