#include "main.h"

/**
* _strncat - concatenates two strings to a provided limit
* @dest: string 1
* @src: string 2
* @n: limit to concatenate
* Return: full string/dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	len1 = 0;
	len2 = 0;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != src[n])
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	if (src[n] > '\0')
	{
		dest[len1] = '\0';
		return (dest);
	}
	else
	{
		return (dest);
	}
}
