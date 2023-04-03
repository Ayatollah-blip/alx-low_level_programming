#include "main.h"
/**
* _memset - function
* Description: mem set
*
* @s: string
* @b: character
* @n: int to be repeted
*
* Return: return string
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
	*s = b;
	s++;
	i++;
}

s = s - i;

return (s);
}
