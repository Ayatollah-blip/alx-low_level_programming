#include "main.h"
/**
* rot13 - function
* Description: crypt a string to a rot 13
* @s: parameter that her value to be converted
* Return:  crypted string to be printed
*/
char *rot13(char *s)
{
int  i = 0;

while (*s != '\0')
{
	if (*s < 123 && *s > 96)
	{
		*s = *s + 13;
	}
	s++;
	i++;
}
s = s - i;
return (s);
}
