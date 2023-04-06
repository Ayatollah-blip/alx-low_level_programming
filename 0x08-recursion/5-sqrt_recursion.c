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
	int k;

	j = &i;
	k = *j;
	if (k * k == n)
		return (k);
	else if (k > n/2)
		return (-1);
	else
	{	
		*j = i;
		i = i -1;
		return _sqrt_recursion(i);
	}
}
