#include "main.h"
/**
* *_strcpy - function
* Description: copy a string to a source
*
* @src: parameter that her value to be copied
* @dest: parameter that her value to be copied from
*
* Return:  address of the string to be printed
*/

int _atoi(char *s)
{
int sum = 0, i = 0;

while (*s != '\0')
{
	if (*s == '-')
		i++;
	if (*s >= 48 && *s <= 57 )
	{
		if (((i -1) % 2) != 0)
			sum = -1 * (sum * 10 + (*s - 48));
		else
			sum = sum * 10 + (*s - 48);
	}
	s++;
}

return sum;
}
