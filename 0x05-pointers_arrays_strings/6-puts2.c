#include "main.h"

/**
* puts2 - prints every other instance
* @str: parameter to be printed
*/

void puts2(char *str)
{
	int len, length;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	length = len - 1;
	len = 0;

	while (len <= length)
	{
		_putchar(str[len]);
		len++;
		len++;
	}
	_putchar('\n');
}
