#include<stdio.h>

/**
 * main - entry point
 *
 * Description: prints combination of two unique digits
 *
 * Return: 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			putchar(',');
			putchar(' ');

			if (num1 == 8 && num2 == 9)

			putchar('\n');
			return (0);
		}
	}

	putchar('\n');
	return (0);
}
