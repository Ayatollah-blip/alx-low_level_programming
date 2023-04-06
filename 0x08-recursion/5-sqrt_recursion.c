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
	int *j;
	int i = n / 2;

	if (n < 0)
		return (-1);
	else if (n == *j)
		return (n);
	else
	{	
		j = &i;
		i = (i + n/i)/2;

		return _sqrt_recursion(i);
	}
}
