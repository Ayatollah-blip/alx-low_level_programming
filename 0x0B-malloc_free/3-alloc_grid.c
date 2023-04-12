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
char **alloc_grid(int width, int height)
{
char *a;
int i = 0, j;


a = malloc(width * height * sizeof(char));
if (a == NULL)
	return (NULL);

while (i < height)
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
