#include "main.h"

/**
 *
 */

void times_table(void)
{
	int row, col, prod;

	row = 0;

	while (row < 10)
	{
		col = 0;
		while (col < 10)
		{
			prod = row * col;
			if (col == 0)
			{
				_putchar(z);
			}
			else if (prod < 10 && col != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putcahr(z);
			}
			else if (prod >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10);
				_putchar(prod % 10);
			}
			col++;
		}
		row++;
	}
}
