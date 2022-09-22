#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: string 1
* @src: string 2
* Return: full string
*/

char *_strcat(char *dest, char *src)
{
	int len1, len2;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	return (dest);
}
