#include "main.h"
/**
* 1-isdigit - function
* Description: function detects if the input is a digit or not
*
* @c: function parameter 
* Return: 1 if digit and 0 otherwise
*/
int _isdigit(int c)
{
if (c > 47 && c < 58)
	return (1);
else
	return (0);
}
