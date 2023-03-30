#include "main.h"

/**
 * _strncat - function
 * Description: concatenate two strings
 *
 * @dest: parameter to be returned
 * @src: parameter to copy from
 * @n: parameter to be stoped
 *
 * Return: adress of
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (*dest != '\0')
{
	*dest = *dest;
	dest++;
	i++;
}

while (j < n && *src != '\0')
{	j++;
	*dest  = *src;
	dest++;
	src++;
	i++;
}

dest = dest - i;

return (dest);
}
