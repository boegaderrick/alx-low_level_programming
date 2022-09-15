#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of square to be printed
 */

void print_square(int size)
{
	int l, i;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
