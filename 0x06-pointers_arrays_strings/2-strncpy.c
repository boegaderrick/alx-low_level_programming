#include "main.h"

/**
* _strncpy - copies strings to specified size
* @dest: destination
* @src: source string
* @n: threshold
* Return: final string/dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (len < n && src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	if (len < n)
	{
		dest[len] = '\0';
		return (dest);
	}
	else
	{
		return (dest);
	}
}
