#include "main.h"
/**
* _sqrt_recursion - function
*
* @n: the number his power to be calculated.
*
* Return: result
*/
int _sqrt_recursion(int n)
{
	int i = n/2;
	int j;
	if (n < 0)
		return (-1);
	else if (i == j)
		return (i);
	else
	{	j=i;
		i = _sqrt_recursion((i + n/i)/2);
		return i, j;
	}
}
