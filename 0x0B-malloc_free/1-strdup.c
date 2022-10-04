#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - creates and returns pointer to duplicate string
* @str: string to be duplicated
* Return: pointer to duplicate string or NULL if operation failed
*/

char *_strdup(char *str)
{
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	char *array = (char *)malloc(sizeof(char) * len);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
