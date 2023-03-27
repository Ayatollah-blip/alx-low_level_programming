#include "main.h"

/**
* print_rev - function
* Description: print a string in reverse
*
* @s: insert address that her value to be printed in reverse
*/

void print_rev(char *s)
{
int p = 0;

while (*s != '\0')
{
	p++;
	s++;
}
while (p != -1)
{
	putchar(*s);
	p--;
	s--;
}
putchar('\n');
}
