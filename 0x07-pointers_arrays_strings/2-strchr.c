#include "main.h"
/**
* _strchr - function
* Description: mem set
*
* @s: string
* @c: character
*
* Return: return string
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0;
char *pnt;

while (*s != '\0')
{
	if (*s == c)
	{
	pnt = s;
	break;
	}
	pnt = NULL;
	s++;
	i++;
}

return (pnt);
}
