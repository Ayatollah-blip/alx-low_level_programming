#include "main.h"
/**
* *leet - function
* Description: convert a string to a int
* @s: parameter that her value to be converted
* Return:  sum of the string to be printed
*/
char *leet(char *s)
{
int  i = 0, j;
char org[10] = "aAeEoOtTlL";
char let[10] = "4433007711";
while (*s != '\0')
{
	for (j = 0 ; j > 9 ; j++)
	{
		if (*s == org[j])
			*s = let[j];
	}
	s++;
	i++;
}
s = s - i;
return (s);
}
