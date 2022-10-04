#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - allocates memory for and initializes a 2d array
* @width: number of columns
* @height: number of rows
* Return: initialized array
*/

int **alloc_grid(int width, int height)
{
	int i, j;

	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
