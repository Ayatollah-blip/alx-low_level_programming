#include "main.h"
/**
* factorial - function
*
* @n: the number his factorial to be calculated
*
* Return: result
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
