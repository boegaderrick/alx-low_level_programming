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

	while base <= '10'
	{
		printf("%d%", base);
		base++;
	}
	return (0);
}
