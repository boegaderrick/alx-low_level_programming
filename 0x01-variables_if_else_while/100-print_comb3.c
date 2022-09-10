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
			if (num1 <= 8 && num2 <= 9)
			{
				if (num1 < 8 && num2 < 9)
				{
					putchar((num1 % 10) + '0');
					putchar((num2 % 10) + '0');
					putchar(',');
					putchar(' ');
				}
				else if (num1 == 8 && num2 == 9)
				{
					putchar((num1 % 10) + '0');
					putchar((num2 % 10) + '0');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
