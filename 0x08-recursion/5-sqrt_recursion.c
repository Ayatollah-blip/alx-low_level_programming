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
	int i = 1;
	int j= 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (i);
	else
		i++;
		j += 2;
		return (_sqrt_recursion(n - 1));
}
