#include "main.h"

/**
* print_rev - prints strings in reverse
* @s: pointer to string to be printed
*/

void print_rev(char *s)
{
	int len, length;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	length = len - 1;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
