#include "search_algos.h"

/**
 * linear_search - Performs a search using the linear search algorithm
 * @array: pointer to array to perform search on
 * @size: length of array
 * @value: value to search for
 *
 * Return: index if value is present, negative one otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
