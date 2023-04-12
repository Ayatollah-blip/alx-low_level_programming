#include "main.h"
/**
* str_concat - function
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


a = malloc(width * height * sizeof(int));
if (a == NULL)
	return (NULL);

while (j <  height)
{
	j = 0;
	while (i < width)
	{
		a[i][j] = 0;
		j++;
	}
	i++;
}
return (a);
}
