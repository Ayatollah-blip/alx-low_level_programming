#include "main.h"
/**
* _strlen_recursion - function
*
* @s: pointer of string that we will count her length
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}

return (i);
}
