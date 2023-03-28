#include "main.h"

/**
* puts_half - function
* Description: print half of a string
*
* @str: insert address that her value to be printed in half
*/

void puts_half(char *str)
{
int p = 0;

while (*str != '\0')
{
	str++;
	p++;
}
p = p / 2;
str = str - p;
while (p != 0)
{
	putchar(*str);
	str++;
	p--;
}

putchar('\n');
}
