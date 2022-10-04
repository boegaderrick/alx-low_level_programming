#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees dynamically allocated memory
* @grid: pointer to pointer to memory area
* @height: dimension of allocated memory
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
