#include "main.h"
/**
* *_strcpy - function
* Description: copy a string to a source
*
* @src: parameter that her value to be copied
* @dest: parameter that her value to be copied from
*
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
	i++;
}
return (dest - i);
}
