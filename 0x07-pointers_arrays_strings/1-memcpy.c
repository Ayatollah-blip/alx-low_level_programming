#include "main.h"
/**
* *_memcpy - function
* Description: copy a string to a source
*
* @src: parameter that her value to be copied
* @dest: parameter that her value to be copied from
* @n:paramter max to copied
*
* Return:  address of the string to be printed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;

while (i < n && *src != '\0')
{
	*dest = *src;
	dest++;
	src++;
	i++;
}
while (i < n)
{
	*dest = '\0';
	dest++;
	i++;
}
}
return (dest - i);
}
