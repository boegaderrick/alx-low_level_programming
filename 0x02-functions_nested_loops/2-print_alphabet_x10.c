#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints alphabet x10
 *
 * Return: 
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int line_count = 0;

	while (line_count <= 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		line_count++;
		_putchar('\n');
		char alphabet = 'a';
	}
}
