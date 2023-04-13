#include "search_algos.h"

/**
 * helper - recursive function to implement algorithm
 * @array: array to perform search on
 * @low: lower bound of range/sub-list
 * @high: upper bound
 * @value: item to search for
 * @size: number of items in the array
 * @idx: pointer to store index of value if present
 */
void helper(int *array, int low, int high, int value, int size, int *idx)
{
	int i, diff = high - low;

	if (high <= size)
	{
		if (array[high] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					*idx = i;
					return;
				}
			}
		}
		printf("Value checked array[%d] = [%d]\n", high, array[high]);
		helper(array, high, high + diff, value, size, idx);
	}
}

/**
 * jump_search - search op using the jump search algorithm
 * @array: array to perform search on
 * @size: number of items in array
 * @value: value to search for
 *
 * Return: index of value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int idx = -1, sqr = sqrt(size);

	if (array == NULL)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", 0, array[0]);
	helper(array, 0, sqr, value, size - 1, &idx);
	return (idx);
}
