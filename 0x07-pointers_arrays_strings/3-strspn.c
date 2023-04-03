#include "main.h"
/**
* _strspn - function
* Description: number of bytes in the initial segment
*
* @s: string
* @accept: character
*
* Return: return string
*/
unsigned int *_strspn(char *s, char *accept)
{
unsigned int i = 0;
char *pnt;

while (*s != '\0')
{
	if (*s == *accept)
	{
	i++;
	}
	s++;
	accept++;
	i++;
}

return (i);
}
