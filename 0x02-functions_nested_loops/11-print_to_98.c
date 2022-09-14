#include <stdio.h>

/**
 * print_to_98 - prints numbers in ascending order
 *
 * @n: starting point
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
}
