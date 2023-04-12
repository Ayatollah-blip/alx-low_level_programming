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

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
len_str = len1 + len2;
a = malloc((len_str + 1) * sizeof(char));

while (i < len1)
{
	a[i] = s1[i];
	i++;
}
j = len1;
i= 0;
while (i < len2)
{
	a[j] = s2[i];
	j++;
	i++;
}

return (a);
}
