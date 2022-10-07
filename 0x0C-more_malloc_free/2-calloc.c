#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory and sets values to 0
* @nmemb: number of items to be allocated memory
* @size: size of each item
* Return: pointer to allocated memory on the heap or NULL if errors encountered
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	j = (size * nmemb);
	array = malloc(j);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		array[i] = 0;
	}
	return (array);
}
