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

	j = &i;
	if ((*j) * (*j) == n)
		return (*j);
	else if (*j >= n/2)
		return (-1);
	else
	{	
		*j = i;
		i = i -1;
		return _sqrt_recursion(i);
	}
}
