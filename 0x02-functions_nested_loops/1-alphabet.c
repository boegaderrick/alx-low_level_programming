#include<main.h>

/**
 * main - program entry point
 *
 * mainfunc: calls print_alphabet
 *
 * print_alphabet: prints alphabet
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
