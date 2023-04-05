#include "main.h"
/**
* _strlen_recursion - function
*
* @s: pointer of string that we will count her length
*
* Return: i length of a string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}


return (i);
}
