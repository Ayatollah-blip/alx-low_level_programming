#include "main.h"
/**
* get_bit - function that bit based on index
*
* @n: number that we need to get from him the bit we need
* @index: the index we want take the value of the bit
*
* Return: return the bit we need
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

if (index > 63)
	return (-1);
else
{
	bit = (n >> index) & 1;
	return (bit);
}
}

