#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - allocates memory
* @b: memory to be allocated
* Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}
}
