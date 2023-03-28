#include "main.h"
/**
* rev_string - function
* Description: print a string in reverse
*
* @s: insert address that her value to be printed in reverse
*
*/

void rev_string(char *s)
{
int  i = 0;
int *p = NULL;

while (*s != '\0')
{
	*p = *s;
	i++;
	s++;
	p++;
}
s = s - i -1;
while (i != 0)
{
	*s = *p;
	s++;
	p--;
}
}
