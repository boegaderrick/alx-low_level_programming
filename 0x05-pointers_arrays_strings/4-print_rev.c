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
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
}
