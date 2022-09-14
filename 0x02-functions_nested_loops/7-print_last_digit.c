#include "main.h"

/**
 * print_last_digit - entry point
 *
 * Description: prints last digit of a number
 *
 * @i: source number
 *
 * Return: last digit or source number
 */

int print_last_digit(int i)
{
	int ld = i % 10;

	if (i < 0)
	{
		ld = ld * -1;
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
}
