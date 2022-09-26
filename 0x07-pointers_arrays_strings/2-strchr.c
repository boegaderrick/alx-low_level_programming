#include "main.h"

/**
* _strchr - looks for character in string
* @s: subject string
* @c: subject char
* Return: pointer s if char present or NULL if not
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s + 1);
}
