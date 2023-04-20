#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - function that calls a function to compare from an array
*
* @array: parameter that get apointer of an array
*
* @size: parameter function of size of the array
*
* @cmp: function of pointer to compare from the array
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i, index;

if (!array || !cmp || size <= 0)
	return (-1);

for (i = 0 ; i < size ; i++)
{
	index = cmp(array[i]);
	if (index != 0)
	{
		break;
	}
}
if (index == 0)
	return (-1);
return (i);
}
