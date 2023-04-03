#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n && *s != '\0')
{
	*s = b;
	s++;
	i++;
}

s = s -i;

return (s);
}
