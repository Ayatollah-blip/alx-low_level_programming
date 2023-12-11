#include "search_algos.h"
/**
 * linear_search - Function that return index of value to be looked at
 *
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to search for
 * Return: value if located and NULL if value is not present
 */
int binary_search(int *array, size_t size, int value)
{
int L = 0;
int R = (int) size - 1;
int i;
if (array != NULL)
{
	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = (L + R)/2;	
		if (array[i] == value)
			return i;
		else if (array[i] > value)
		{
			R = i - 1;
		}
		else if (array[i] < value)
		{
			L = i + 1;
		}
	}
}
return (-1);
}
