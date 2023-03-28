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
while (*src != '\0')
{
	*src = *dest;
	dest++;
	src++;
}
return (src);
}
