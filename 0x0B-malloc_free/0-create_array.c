#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function creates array on memory reserved by malloc
* @size: size of the array/space to be reserved by malloc
* @c: character to be initialized to array in reserved memory
* Return: created array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
