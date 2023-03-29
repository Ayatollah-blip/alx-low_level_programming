#include "main.h"
/**
* *string_toupper - function
* Description: convert a string to a int
*
* @s: parameter that her value to be converted
*
* Return:  sum of the string to be printed
*/

char *string_toupper(char *s)
{
int sum = 0, i = 0;

while (*s != '\0')
{

	if (*s < 123 && *s > 96)
	{
		*s = *s - 32;
	}
	s++;
	s = s - i;
}


return (s);
}
