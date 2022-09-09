#include<stdio.h>

/**
 * main - entry point
 *
 * Description: prints all digits in base 10
 *
 * Return: 0
 */

int main(void)
{
	int base;

	base = '0';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	putchar('\n');
	return (0);
}
