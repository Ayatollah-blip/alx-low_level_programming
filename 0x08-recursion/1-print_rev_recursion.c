#include "main.h"
/**
*  _print_rev_recursion - function
* Description: 
* 
* @s: pointer of string to be printed in reverse
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_print_rev_recursion(s);
}
