#include "main.h"

/**
* puts2 - function
* Description: print a string
*
* @str: insert address that her value to be started length sum from
*/

void puts2(char *str)
{

while (*str != '\0')
{
	putchar(*str);
	str++;

}

putchar('\n');
}
