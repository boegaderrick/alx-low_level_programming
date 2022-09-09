#include<stdio.h>

/**
 * main - program entry point
 *
 * Description: Program prints alphabet in lower and upper cases
 *
 * Return: 0
 */

int main(void)
{
	char alphabet, ALPHABET;

	alphabet = 'a';
	ALPHABET = 'A';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}

	putchar('\n');
	return (0);
}
