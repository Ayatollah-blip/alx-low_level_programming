#include "main.h"

/**
* _print_rev - function
* Description: print a string in reverse
*
* @s: insert address that her value to be printed in reverse
*/

void print_rev(char *s)
{

while (*s != '\0')
{
	s--;
	putchar(*s);

}
putchar('\n');
}
