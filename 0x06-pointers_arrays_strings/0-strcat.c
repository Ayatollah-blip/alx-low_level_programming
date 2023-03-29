#include "main.h"

char *_strcat(char *dest, char *src)
{

while (*dest != '\n')
{
	dest++;
}

while (*src != '\n')
{
	*dest = *src;
	dest++;
	src++;
}
return (dest);

}
