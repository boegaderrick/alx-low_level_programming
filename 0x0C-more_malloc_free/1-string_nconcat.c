#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* length - calculates length of string s1
* @s1: subject string
* Return: length
*/

unsigned int length(char *s1)
{
	unsigned int i, len = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}
	len++;
	return (len);
}

/**
* string_nconcat - concatenates strings to specified length limit
* @s1: subject string 1
* @s2: subject string 2
* @n: length limit for string 2
* Return: final string on NULL if errors encoutered
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, len;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = length(s1);
	array = malloc(sizeof(char) * (len + n));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		array[i] = s2[j];
		i++;
	}
	array[i] = '\0';

	return (array);
}
