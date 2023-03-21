#include "main.h"
#include <ctype.h>
/**
* _islower - function
* Description: check for lower case
*
* @c:  parametre caracter to be checked if lower case
*
* Return: 0 (Fail) / 1 (Success)
*
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
