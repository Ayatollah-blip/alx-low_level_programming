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

while (*str != '\0')
{
	i++;
	str++;
}
str = str - i;

a = malloc(i * sizeof(char));

if (a == NULL)
	return (NULL);
printf("i : %d",i);
while (j < i)
{
	a[j] = str[j];
	j++;
}
return (a);
}
