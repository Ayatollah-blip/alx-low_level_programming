#include "main.h"

/**
 * _strcmp - function
 * Description: compare two strings
 *
 * @dest: parameter to be returned
 * @src: parameter to copy from
 *
 * Return: adress of
 */
int _strcmp(char *dest, char *src)
{
int i = 0;

while (*src != '\0')
{
	if (*dest != *src)
	{
		i = i + (*dest - *src);
		break ;
	}	
	else if (*dest == *src)
	{
		dest++;
		src++;	
	}
}

return (i);
}
