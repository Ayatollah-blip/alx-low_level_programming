#include "main.h"
/**
 * _strstr - Entry point
 * @s: input
 * @a: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *s, char *a)
{

while (*s != '\0')
{
	char *t = s;
	char *r = a;

	while (*t == *r && *r != '\0')
	{
		t++;
		r++;
	}

	if (*t == '\0')
	{
		return (s);
	}
	s++;
}
return (0);
}
