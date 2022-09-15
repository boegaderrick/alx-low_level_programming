#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 */

void print_numbers(void)
{
	for (char n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
