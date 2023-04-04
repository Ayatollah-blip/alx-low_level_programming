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

while (*s != '\0')
{
	while (*accept != '\0')
	{
		if (*s != *accept)
		{
			pnt = NULL;
			break;
		}
		else
		{
			pnt = *s;
			accept++;
			pnt++;	
			i++;
		}
	}
	accept = accept - i;
	i = 0;
	s++;

}
return (pnt);
}
