#include "main.h"
/**
* _strstr - function
* Description: fetect substring
*
* @s: string
* @accept: character
*
* Return: return string
*/
char *_strstr(char *s, char *accept)
{
char *pnt = NULL;
int i = 0;

while (*s != '\0')
{
	while (*accept != '\0')
	{
		if (*s == *accept)
		{
			pnt = s;
			break;
		}
		accept++;
		i++;
	}
	accept = accept - i;
	if (*s != *accept)
	{
		i = 0;
		s++;
	}
	else
		break;


}
return (pnt);
}
