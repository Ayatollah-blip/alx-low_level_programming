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
	return (_sqrt(n, 1));
}
/**
*_sqrt - function that calculate the square of n base on i
*
*@n: number whom the square needed to be calculated
*@i: number to start from calculating the square
*
*Return: square of n
*/
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);

	else if (square == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
