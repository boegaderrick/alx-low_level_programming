#include "function_pointers.h"

/**
* array_iterator - executes function for each element of array
* @array: subject array
* @size: size of array
* @action: pointer to function to be executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
