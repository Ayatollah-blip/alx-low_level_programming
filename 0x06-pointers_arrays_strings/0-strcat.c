#include "main.h"

/**
 * _strcat - function
 * Description: concatenate two strings
 *
 * @dest: parameter to be returned
 * @src: parameter to copy from
 *
 * Return: adress of
 */
char *_strcat(char *dest, char *src)
{
int i = 0;

while (*dest)
{
	dest++;
	i++;
}
while (*src != '\n')
{
	*dest  = *src;
	dest++;
	src++;
	i++;
}
dest = dest - i;

return (dest);
}
