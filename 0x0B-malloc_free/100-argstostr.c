#include <stdio.h>
#include <stdlib.h>

/**
* length - checks for combined length of strings stored in str
* @c: number of arguments/strings passed
* @str: pointer to arguments/strings passed
* Return: total length
*/

int length(int c, char **str)
{
	int i, j, len = 0;

	for (i = 0; i < c; i++)
	{
		for (j = 0; str[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	return (len);
}

/**
* argstostr - concatenates arguments passed, new line for each
* @ac: number of arguments passed
* @av: array of arguments/strings
* Return: pointer to final string or NULL if errors encountered
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len;
	char *array;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = length(ac, av);
	array = malloc(sizeof(char) * len + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			array[k] = av[i][j];
			k++;
		}
		if (i < ac)
		{
			array[k] = '\n';
			k++;
		}
	}
	return (array);
}
