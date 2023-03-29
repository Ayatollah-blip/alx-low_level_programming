#include "main.h"
/**
* *_atoi - function
* Description: convert a string to a int
*
* @s: parameter that her value to be converted
*
* Return:  sum of the string to be printed
*/

int _atoi(char *s)
{
int sum = 0, i = 1;

while (*s != '\0')
{
	if (*s == 45)
		i = i * -1;

	if (*s < 58 && *s > 47)
	{
		if (i < 0)
		{
			sum = i * (sum * 10 + (*s - 48));
			i = 1;
		}
		else
			sum = i * (sum * 10 + (*s - 48));
	}
	s++;
}


return (sum);
}
