#include <stdio.h>
/**
* _isupper - function
* Description: function detects if the input is uppercase or not
*
* @c: function parameter caracter
*
* Return: 1 if uppercase and 0 otherwise
*/
int _isupper(char c)
{
if (c > 64 && c < 91)
{
	_putchar('\n');	
	return (1);
}
else
{
	_putchar('\n');
	return (0);
}
}
