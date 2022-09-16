#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle to be printed
 */

void print_triangle(int size)
{
	int l, i;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (i = l; i < size; i++)
			{
				_putchar(' ');
			}
			for (i = 1; i <= l; i++)
			{
				_putchar('#');
			}
		}
	}
	_putchar('\n');
}
