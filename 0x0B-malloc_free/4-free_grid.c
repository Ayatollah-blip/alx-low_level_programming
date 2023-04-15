#include "main.h"
/**
* free_grid - function
* Description: function that dealocate array
*
* @grid: parameter that represent the array to be freed
* @height: parameter that represent the height of the two diemension array
*
*/
void free_grid(int **grid, int height)
{
int i = 0;

while (!grid)
{
	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
	grid++;
}
}
