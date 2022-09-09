#include<stdio.h>

/**
 * main - entry point
 *
 * Description: prints the hex
 *
 * Return: 0
 */

int main(void)
{
	char letter;
	int num;

	num = '0';
	letter = 'a';

	while (letter <= 'f')
	{
		while (num <= '9')
		{
			putchar(num);
			num++;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
