#include "main.h"
/**
* _puts_recursion - function
*
* @s: pointer of string to be printed
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	putchar(*s);
	s++;
	_puts_recursion(s);
}