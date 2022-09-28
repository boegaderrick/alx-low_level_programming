#include "main.h"

/**
* _strlen_recursion - checks length of string
* @s: subject string
* Return: string length
*/

int _strlen_recursion(char *s)
{
	static int len = 1;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(s + 1);
	}
	return (len - 1);
}
