#include "main.h"

/**
 * print_line - prints line
 *
 * @n: range to which to print
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
