#include "function_pointers.h"
/**
* array_iterator - function that calls a function to iterate through an array
*
* @array: parameter that get apointer of an array
*
* @size: parameter function of size of the array
*
* @action: function of pointer to go yhrough the array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!array || !action || size == 0)
	return;

for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}
