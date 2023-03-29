#include "main.h"
/**
* *cap_string - function
* Description: convert a string to a int
*
* @s: parameter that her value to be converted
*
* Return:  sum of the string to be printed
*/

char *cap_string(char *s)
{
int  i = 0;

while (*s != '\0')
{

	if (*s < 123 && *s > 96)
	{
		if (*(s - 1) == ',' || *(s - 1) == ';' || *(s - 1) == '.' || *(s - 1) == '!' || *(s - 1) == '?' || *(s - 1) == '"' || *(s - 1) == '(' || *(s - 1) == ')' || *(s - 1) == '{' || *(s - 1) == '}'|| ' ' || '	' )
		{
			*s = *s - 32;
		}
	}
	s++;
	i++;
}

s = s - i;

return (s);
}
