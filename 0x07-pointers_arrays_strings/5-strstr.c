#include "main.h"
/**
* _strpbrk - function
* Description: mem set
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
		else 
		{
			pnt = NULL;
			break;
		}
		accept++;
		i++;
	}
	if (*s != *accept)
	{
		accept = accept - i;
		i = 0;
		s++;
	}
	else
		break;

}
return (pnt);
}
