#include "main.h"

/**
* _print_rev - function
* Description: print a string in reverse
*
* @s: insert address that her value to be printed in reverse
*/

void _print_rev(char *s)
{
int i, p = 0;

while (*s != '\0')
{
	s++;
	p++;
}
for (i = s + p ; i < s ; i--)
{
	putchar(i);
}
putchar('\n');
}
