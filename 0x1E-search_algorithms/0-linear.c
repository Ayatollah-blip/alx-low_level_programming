#include "search_algos.h"
/**
 * linear_search - Function that return index of value to be looked at
 *
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to search for
 * Return: value if located and NULL if value is not present
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array != NULL)
{
	for(i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}

}
return (-1);
}
