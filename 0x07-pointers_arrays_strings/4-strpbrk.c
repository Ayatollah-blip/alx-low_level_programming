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
char *_strpbrk(char *s, char *accept)
{
char *pnt;

while (*s != '\0')
{
/**	while (*accept != '\0')
	{*/
		if (*s == *accept)
		{
			pnt = s;
			break;
		}
		accept++;
		pnt = NULL;
/**	}*/
	s++;
}

return (pnt - 1);
}
