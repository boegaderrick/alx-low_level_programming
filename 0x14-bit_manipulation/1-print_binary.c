#include "main.h"

/**
* print_binary - converts decimal to binary
* @n: decimal number to be converted
*/
void print_binary(unsigned long int n)
{
	int i, shift = 64, on = 0;
	char bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < 64; i++)
	{
		shift -= 1;
		bit = ((n >> shift) & 1) + '0';
		if (!on && bit == '1')
			on = 1;
		if (on)
			_putchar(bit);
	}
}
