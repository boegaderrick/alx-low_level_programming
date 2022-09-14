#include "main.h"

/**
 * times_table - function prints times table
 */

void times_table(void)
{
	int row, col, prod;

	row = 0;
	col = 0;

	while (row < 10)
	{
		row++;
		while (col < 10)
		{
			col++;
			prod = row * col;
			if (col == 0)
			{
				_putchar(prod);
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
		}
		_putchar('\n');
	}
}
