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

while (*s != '\0')
{
	if (*s == c)
	{
	return (s);
	}
	s++;
	i++;
}

return (0);
}
