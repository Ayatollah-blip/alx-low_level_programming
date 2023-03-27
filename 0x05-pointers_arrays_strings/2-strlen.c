#include "main.h"

/**
* _strlen - function
* Description: calculate the length of a string
*
* @s: insert address that her value to be started length sum from
*
* Return: p as a length of a string
*/

int _strlen(char *s)
{
	int p = 0;

while (*s != '\0')
{
	s++;
	p = p + 1;
}
return (p);
}
