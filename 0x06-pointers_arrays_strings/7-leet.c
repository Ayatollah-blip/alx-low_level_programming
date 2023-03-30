#include "main.h"
/**
* *leet - function
* Description: convert a string to a int
* @s: parameter that her value to be converted
* Return:  sum of the string to be printed
*/
char *leet(char *s)
{
int  i = 0;

while (*s != '\0')
{
		if (*s == 'a' || *s == 'A')
			*s = '4';
		else if (*s == 'e' || *s == 'E')
			*s = '3';
		else if (*s == 'o' || *s == 'O')
			*s = 0;
		else if (*s == 't' || *s == 'T')
			*s = 7;
		else if (*s == 'l' || *s == 'L')
			*s = 1;
		else
			*s = *s;
	}
	s++;
	i++;
}
s = s - i;
return (s);
}
