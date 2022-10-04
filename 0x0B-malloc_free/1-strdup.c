#include <stdio.h>
#include <stdlib.h>

/**
* length - finds length of string
* @str: subject string
* Return: length of string
*/

int length(char *str)
{
	int len = 0, i;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
* _strdup - creates and returns pointer to duplicate string
* @str: string to be duplicated
* Return: pointer to duplicate string or NULL if operation failed
*/

char *_strdup(char *str)
{
	int i, len = length(str);
	char *array = (char *)malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}
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
