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
int i = 0;
int j = 0;

while (*s != '\0')
{
	while (*s == *accept && *accept != '\0')
	{
		accept++;
		i++;
	}
	if (*s != *accept)
	{
		accept = accept - i;
		i = 0;
		s++;
		j++;
	}
	else
		break;


}
return (s);
}
