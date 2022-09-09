#include<stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers separated by commas
 *
 * Return: 0
 */

int main(void)
{
	int num;

	num = '0';

	while (num <= 9)
	{
		for (num)
		{
			putchar(num);
			printf(",");
			num++;
		}
	}
	putchar('\n');
	return (0);
}
