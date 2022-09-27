#include "main.h"

/**
* _strpbrk - searches string for any set of bytes
* @s: string to be searched
* @accept: chars to be searched for
* Return: pointer to leading byte if present or NULL if absent
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				char *ptr = &s[i];

				return (ptr);
			}
		}
	}
	return (0);
}
