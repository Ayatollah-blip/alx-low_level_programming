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
int _strcmp(char *dest, char *src)
{
int i = 0;

while (*dest != '\0')
{
	i = i + (*dest - 38);
	dest++;
}
while (*src != '\0')
{
	i = i - (*src - 38);
	src++;
}


return (i);
}
