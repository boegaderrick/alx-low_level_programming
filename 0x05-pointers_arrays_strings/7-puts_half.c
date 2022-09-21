#include "main.h"

/**
* puts_half - prints second half of string
* @str: pointer to string to be printed
*/

void puts_half(char *str)
{
	int len, length, half, secondhalf;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	length = len;
	half = length / 2;

	if (length % 2 != 0)
	{
		secondhalf = half + 1;
	}
	else
	{
		secondhalf = half;
	}
	while (secondhalf < length)
	{
		_putchar(str[secondhalf]);
		secondhalf++;
	}
	_putchar('\n');
}
