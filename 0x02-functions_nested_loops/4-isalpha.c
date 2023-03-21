#include "main.h"
#include <ctype.h>
/**
* _isalpha - function
* Description: check for lower case
*
* @c:  parametre caracter to be checked if lower case
*
* Return: 0 (Fail) / 1 (Success)
*
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
