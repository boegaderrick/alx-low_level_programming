#include "main.h"

/**
* print_rev - prints strings in reverse
* @s: pointer to string to be printed
*/

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	int length = len--;
	while (length >= 0)
	{
		_putchar(s[length]);
		len--;
	}
	_putchar('\n');
}
