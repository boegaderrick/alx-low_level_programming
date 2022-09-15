#include "main.h"

/**
 * times_table - function prints times table
 */

void times_table(int n)
{
	int row, col, prod;

	row = 0;

	if ((n >= 0) && (n <= 15))
	{
		while (row < n)
		{
			col = 0;

			while (col < n)
			{
				prod = row * col;
				if (col == 0)
				{
					_putchar(prod + '0');
				}
				else if (prod < 10 && col != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else if (prod >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				col++;
			}
			row++;
			_putchar('\n');
		}
	}
}
