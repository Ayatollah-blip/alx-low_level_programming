#include "main.h"
/**
* alloc_grid - function
* Description: function that concatenate two string
*
* @width: parameter that represent the width of the two domension array
* @height: parameter that represent the height of the two diemension array
*
* Return: NULL if size is 0 or pointer if not
*/
int **alloc_grid(int width, int height)
{
int **a;
int i = 0, j = 0;

if (width == 0 && height == 0)
	return (NULL);
a = malloc(height * sizeof(int *));
if (a == NULL)
	return (NULL);

while (j < height)
{
	a[j] = malloc(width * sizeof(int));
	if (a[j] == 0)
		return (NULL);
	j++;
}
while (i <  height)
{
	j = 0;
	while (j < width)
	{
		a[i][j] = 0;
		j++;
	}
	i++;
}
return (a);
}
