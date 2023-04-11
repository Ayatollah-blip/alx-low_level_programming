#include "main.h"
/**
* create_array - function
* Description: function that prints a char
*
* @size: parameter that represent the size of the array
* @c: parameter that represent the caracter to be printed
*
* Return: NULL if size is 0 or pointer if not
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
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
}
return (a);
}
