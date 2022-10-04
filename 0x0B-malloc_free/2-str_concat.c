#include <stdio.h>
#include <stdlib.h>

/**
* length - gets length of strings
* @s1: first string
* @s2: second string
* Return: combined length of strings
*/

int length(char *s1, char *s2)
{
	int i, len = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			len++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			len++;
		}
	}
	return (len);
}

/**
* str_concat - concatenates strings
* @s1: first string
* @s2: second string
* Return: pointer to concatenated string or NULL if errors encountered
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len = length(s1, s2);
	char *concat = (char *)malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			concat[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (j; s2[j] != '\0'; j++)
		{
			concat[i] = s2[j];
			i++;
		}
	}
	concat[i] = '\0';
	return (concat);
}
