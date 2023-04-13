#include "search_algos.h"

/**
 * helper - recursive function to aid in search
 * @array: pointer to array to perform search on
 * @size: length of subject array
 * @value: value to search for
 * @low: lower bound of sub-array range
 * @high: upper bound
 * @idx: pointer to store index if value is found
 */
void helper(int *array, int size, int value, int low, int high, int *idx)
{
	int pos;

	if (high - low > 0)
	{
		pos = low + ((value - array[low]) * (high - low)) / (
				array[high] - array[low]);
		if (pos < size)
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return;
		}
		if (array[pos] == value)
		{
			*idx = pos;
			return;
		}
		if (array[pos] > value)
			helper(array, size, value, low, pos, idx);
		else
			helper(array, size, value, pos + 1, high, idx);
	}
	else if (high == low)
	{
		if (array[high] == value)
			*idx = high;
	}
}

/**
 * interpolation_search - performs search using interpolation search
 * @array: array to perform search on
 * @size: number of items in array
 * @value: value to search for
 *
 * Return: index of value if present, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	int idx = -1;

	helper(array, size, value, 0, size - 1, &idx);
	return (idx);
}
