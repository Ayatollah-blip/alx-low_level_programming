#include "main.h"
/**
* str_concat - function
* Description: function that concatenate two string
*
* @s1: parameter that represent the string 
* @s2: parameter that represent the string
*
* Return: NULL if size is 0 or pointer if not
*/
char *str_concat(char *s1, char *s2)
{
char *a;
int len1, len2, len_str;
int i = 0, j;

len1 = strlen(s1);
len2 = strlen(s2);
len_str = len1 + len2;
a = malloc(len_str * sizeof(char));
while (i <= len1)
{
	a[i] = s1[i];
	i++;
}
j = len2;
printf("%d", j);
while (j < len_str)
{
	a[j] = s2[j];
	j++;
}
return (a);
}
