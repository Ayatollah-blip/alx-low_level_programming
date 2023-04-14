#include "main.h"
/**
* array_range - Function
* Description: create array of integers
*
* @min: parameter min to start from
* @max: parameter max to end with
*
* Return: pointer if success
*/
int *array_range(int min, int max)
{
int *ptr;
int i, len,t = min;

len = max - min + 1;

if (min > max)
	return (NULL);

ptr = malloc(len * sizeof(int));
if (ptr == NULL)
{
	return (NULL);
}
for (i = 0 ; i <= (max - min) ; i++)
{
	ptr[i] = t++;
}
return (ptr);
}
