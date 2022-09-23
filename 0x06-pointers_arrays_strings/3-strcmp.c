#include "main.h"

/**
* _strcmp - compares two strings
* @s1: string 1
* @s2: string 2
* Return: 0 if same, positive if str1>  or negative if str2>
*/

int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0; s1[len] != '\0' || s2[len] != '\0'; len++)
	{
		if (s1[len] != s2[len])
			return (s1[len] - s2[len]);
	}
	return (0);
}

