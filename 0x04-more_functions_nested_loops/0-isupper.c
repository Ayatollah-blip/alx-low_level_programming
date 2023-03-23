#include <stdio.h>
/**
* _isupper - function
* Description: function detects if the input is uppercase or not
*
* Return: 1 if uppercase and 0 otherwise
*/
int _isupper(char c)
{
if (c > 64 && c < 91)
	return (1);
else
	return (0);
}
