#include "main.h"

/**
 * _strncat - function
 * Description: concatenate two strings
 *
 * @dest: parameter to be returned
 * @src: parameter to copy from
 *
 * Return: adress of
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (*dest != '\0')
{
	dest++;
	i++;
}
while (j <= n)
{
	*dest  = *src;
	dest++;
	src++;
	i++;
	j++;
}

dest = dest - i;

return (dest);
}
