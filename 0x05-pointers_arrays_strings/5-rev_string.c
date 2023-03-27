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

while (*s != '\0')
{
/*	*p = *s;*/
	i++;
	s++;
}
while (i != 0)
{
	*(s - i) = *s;
	s++;
}
}
