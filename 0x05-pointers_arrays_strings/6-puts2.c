#include "main.h"

/**
* puts2 - prints every other instance
* @str: parameter to be printed
*/

void puts2(char *str)
{
	int len, length;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	length = len - 1;
	len = 0;

	while (len <= length)
	{
		_putchar(s[len]);
		len++;
		len++;
	}
	_putchar('\n');
}
