#include "main.h"

/**
 * print_alphabet - alphabet function
 *
 * description: prints alphabet
 *
 * Return:
 */

void print_alphabet(void)
{

	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar (alphabet);
		alphabet++;
	}
	_putchar('\n');
	return;
}
