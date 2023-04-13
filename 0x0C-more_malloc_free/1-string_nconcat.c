#include "main.h"
/**
* string_nconcat - function
* Description: function that concatenate two string
*
* @s1: parameter that represent the string
* @s2: parameter that represent the string
* @n : number of caraters in string 2 to be copied
*
* Return: NULL if size is 0 or pointer if not
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int len1, len_str,len2;
unsigned int i = 0, j;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
	n = len2;

len_str = len1 + n;
a = malloc((len_str + 1) * sizeof(char));
if (a == NULL)
	return (NULL);

while (i < len1)
{
	a[i] = s1[i];
	i++;
}
j = len1;
i = 0;
while (i < n)
{
	a[j] = s2[i];
	j++;
	i++;
}

return (a);
}
