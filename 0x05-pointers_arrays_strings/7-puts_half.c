#include "main.h"

/**
* print_rev - function
* Description: print half of a string
*
* @str: insert address that her value to be printed in half
*/

void puts_half(char *str)
{
int p = 0;

while (*str != '\0')
{
	p++;
}
p = p / 2;
while (p != 0)
{
	p--;
	str++;
	putchar(*str);
}
putchar('\n');
}
