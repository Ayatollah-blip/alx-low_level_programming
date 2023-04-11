#include "main.h"
/**
* create_array - function
* Description: function that prints a char
*
* @size: parameter that represent the size of the array
* @c: parameter that represent the caracter to be printed
*/
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i = 0;

if (size == 0)
	return (NULL);
else
{
	a = malloc(size * sizeof(char));
	while (i < size)
	{
		a[i] = c;
	}
}
return (a);
}
