#include "main.h"
/**
* _strdup - function
* Description: function that copies a string
*
* @str: parameter that represent the string of the array
*
* Return: NULL if size is 0 or pointer if not
*/
char *_strdup(char *str)
{
char *a;
int i = 0, j = 0;

if (str == NULL)
	return (NULL);
while (*str != '\0')
{
	i++;
	str++;
}
str = str - i;

a = malloc((i + 1) * sizeof(char));

if (a == 0)
	return (NULL);
while (j < i)
{
	a[j] = str[j];
	j++;
}
return (a);
}
