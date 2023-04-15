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
void free_grid(int **grid, int height)
{
int i = 0, j = 0;

while (j < height)
{
	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
	j++;
}
}
