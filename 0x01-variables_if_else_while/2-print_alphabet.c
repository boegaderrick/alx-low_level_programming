#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Program prints alphabet in small letters
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	return (0);
}
