#include "main.h"

/**
 * _strcat - function
 * Description: concatenate two strings
 * 
 * Return: adress of 
 * */

char *_strcat(char *dest, char *src)
{

while (*dest)
{
	dest++;
}
while (*src != '\n')
{
	*dest  = *src;
	dest++;
	src++;
}
return (dest);
}
