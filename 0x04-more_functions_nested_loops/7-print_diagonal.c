#include "main.h"

/**
 * print_line - prints line
 *
 * @n: range to which to print
 */

void print_diagonal(int n)
{
	int i, spc;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (spc = 1; spc <= n; spc++)
			{
				if (spc == i)
				{
					_putchar('\\');
				}
				else if (spc < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
