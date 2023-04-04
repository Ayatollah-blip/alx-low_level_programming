#include "main.h"
/**
* _strstr - function
* Description: return substring if exist
*
* @haystack: string
* @needle: string
*
* Return: return string
*/
char *_strstr(char *haystack, char *needle)
{
char *pnt = NULL;
int i = 0;

while (*haystack != '\0')
{
	*pnt = haystack;
	while (*needle != '\0')
	{
		if (*haystack != *needle)
		{
			*pnt = NULL;
			break;
		}
		needle++;
		i++;
	}
	if (**pnt != *haystack)
	{
		needle = needle - i;
		i = 0;
		haystack++;
	}
}
return (*pnt);
}
