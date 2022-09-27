#include "main.h"

/**
* _strspn - gets length of prefix substring
* @s: source string
* @accept: chars to look for
* Return: length
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;
	char stop[] = " ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
		if (s[i] == stop[0])
		{
			break;
		}
	}
	return (count);
}
