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
	int i = 0;
	int k;

	j = &i;
	k = *j;
	if (n < 0)
		return (-1);
	else if ((k * k) == n)
		return (k);
	else
	{	
		i = i + 1;
		*j = i;
		return _sqrt_recursion(i);
	}
}
