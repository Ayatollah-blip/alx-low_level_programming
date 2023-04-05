#include "main.h"
/**
* _pow_recursion - function
*
* @x: the number his power to be calculated.
* @y: the order to be calculated the power of.
*
* Return: result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(y - 1));
}
