#include "main.h"

/**
* _strcmp - compares size of two strings
* @s1: string 1
* @s2: string 2
* Return: 0 if same, positive if str1 is greater or negative if str2 is greater
*/

int _strcmp(char *s1, char *s2)
{
	int len1, len2;

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len1 == len2)
	{
		return (0);
	}
	else if (len1 < len2)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
