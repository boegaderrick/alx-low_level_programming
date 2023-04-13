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
	if (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");
		}
		mid = low + ((high - low) / 2);
		if (array[mid] == value)
		{
			*idx = mid;
			return;
		}
		if (array[mid] > value)
			helper(array, value, size, idx, low, mid - 1);
		else
			helper(array, value, size, idx, mid + 1, high);
	}
}

/**
 * binary_search - performs a search using binary search algorithm
 * @array: array to perform search on
 * @size: number of items in array
 * @value: value to search for
 *
 * Return: index of value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int idx = -1;

	if (array == NULL)
		return (idx);

	helper(array, value, size, &idx, 0, size - 1);
	return (idx);
}
