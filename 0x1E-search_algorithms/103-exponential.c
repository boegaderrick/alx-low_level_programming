#include "search_algos.h"

/**
 * helper - recursive function to aid in implemetation of the algorithm
 * @array: array to perform search on
 * @value: value to search for
 * @size: number of items in array
 * @idx: pointer to store index if found
 * @low: lower bound of search index range
 * @high: upper bound
 */
void helper(int *array, int value, int size, int *idx, int low, int high)
{
	int mid, i;

	/*if (*idx != -1)*/
	/*	return;*/
	mid = low + ((high - low) / 2);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}
	if (high - low > 0)
	{
		if (array[mid] == value)
		{
			*idx = mid;
			if (array[mid - 1] == value)
				helper(array, value, size, idx, low, mid);
			return;
		}
		if (array[mid] > value)
			helper(array, value, size, idx, low, mid);
		else
			helper(array, value, size, idx, mid + 1, high);
	}
	if (array[mid] == value)
		*idx = mid;
}

/**
 * exponential_search - perform search using exponential search algorithm
 * @array: pointer to array to be searched
 * @size: length of array
 * @value: value to be searched for
 *
 * Return: index of value if present in array, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	int idx = -1, i;

	if (!array)
		return (-1);

	for (i = 1; i < (int)size; i *= 2)
	{
		/*printf("Value checked array[%d] = [%d]\n", i, array[i]);*/
		if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i / 2, i);
			if (array[i] == value)
				idx = i;
			else
				helper(array, value, size, &idx, i / 2, i);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (i * 2 >= (int)size)
		{
			printf("Value found between indexes [%d] and [%lu]\n", i, size - 1);
			helper(array, value, size, &idx, i, size - 1);
		}
	}
	return (idx);
}
