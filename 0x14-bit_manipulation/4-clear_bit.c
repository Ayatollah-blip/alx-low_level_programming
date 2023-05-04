#include "main.h"
#include <stdio.h>
/**
* clear_bit - function that clears a bit based on index
*
* @n: number that we need to get from him the bit we need
* @index: the index we want take the value of the bit
*
* Return: return the bit we need
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *bit = n;


if (index > 63)
	return (-1);
else
{
	*bit = ((0UL << index) & *n << index);
	return (1);
}
}

