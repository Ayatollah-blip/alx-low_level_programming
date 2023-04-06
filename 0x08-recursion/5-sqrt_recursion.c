#include "main.h"

int _sqrt(int n, int i);


/**
* _sqrt_recursion - function
*
* @n: the number his power to be calculated.
*
* Return: result
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n,1));
}
/**
*
*
*
*
*/
int _sqrt(int n, int i)
{
	int square = i * i;
	
	if (square > n)
		return (-1);

	else if (square == n)
		return (square);
	else
		return (_sqrt(n, i+1));
}
