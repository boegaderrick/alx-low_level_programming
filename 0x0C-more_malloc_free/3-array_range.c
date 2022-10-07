#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates array of specified range
* @min: value to be stored at first address of array
* @max: value to be stored at last address
*
* all values to be stored in ascending order from min to max
*
* Return: pointer to created array or NULL if errors encoutered
*/

int *array_range(int min, int max)
{
	int range, i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	range = ++max - min;
	array = malloc(sizeof(int) * range);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
