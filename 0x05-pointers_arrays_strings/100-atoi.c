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
int sum = 0;

while (*s != '\0')
{
	if (*s >= 48 && *s <= 57 )
	{
		sum = sum * 10 + (*s - 48);
	}
	s++;
}

return sum;
}
