#include "main.h"
/**
* *_strncpy - function
* Description: copy a string to a source
*
* @src: parameter that her value to be copied
* @dest: parameter that her value to be copied from
* @n:paramter max to copied
*
* Return:  address of the string to be printed
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n)
{
	*dest = *src;
	dest++;
	src++;
	i++;
}

return (dest - i);
}
