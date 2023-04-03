#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (s != '\0' )
{
while (i < n)
{
	*s = b;
	s++;
	i++;
	printf("%c",*s);
}
}
s = s - i;

return (s);
}
