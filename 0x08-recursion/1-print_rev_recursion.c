#include "main.h"
/**
*  _print_rev_recursion - function
* Description: print string in reverse 
* 
* @s: pointer of string to be printed in reverse
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
}
