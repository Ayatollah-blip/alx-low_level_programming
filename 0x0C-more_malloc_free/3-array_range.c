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
void *array_range(int min, int max)
{
int *ptr;
 int i, len;

len = max - min;

if (min > max)
	return (NULL);
ptr = malloc(len * sizeof(int));
if (ptr == NULL)
{
	return (NULL);
}
for (i = min ; i <= max ; i++)
{
	ptr[i] = min;
}
return (ptr);
}
