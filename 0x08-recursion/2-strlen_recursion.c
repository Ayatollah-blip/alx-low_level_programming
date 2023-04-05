#include "main.h"
/**
* _strlen_recursion - function
*
* @s: pointer of string to be printed
*/
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		i = 1; 
	}
	i = i + _strlen_recursion(s + 1);

return (i);
}
