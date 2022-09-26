#include "main.h"

/**
* _memset - fills mem with constant byte
* @s: pointer to memory to be filled
* @b: constant byte
* @n: number of bytes to be filled
* Return: pointer to memory || s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
