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
char *p;

while (*s != '\0')
{
	*p = *s;
	i++;
	s++;
	p++;
}
s = s - i;
while (i != 0)
{
	p--;
	*s = *p;
	s++;
	i--;

	
	
}
}
