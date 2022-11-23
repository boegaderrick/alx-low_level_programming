#include "main.h"

/**
* print_binary - converts decimal to binary
* @n: decimal number to be converted
*/
void print_binary(unsigned long int n)
{
	int i = 0;
	char bits[64];

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n)
	{
		if (n % 2 == 0)
			bits[i] = '0';
		else
			bits[i] = '1';
		n >>= 1;
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(bits[i]);
		i--;
	}
}


void print_binary(unsigned long int n)
{
	int i, shift = 32, on = 0;
	char bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < 32; i++)
	{
		shift -= 1;
		bit = ((n >> shift) & 1) + '0';
		if (!on && bit == '1')
			on = 1;
		if (on)
			_putchar(bit);
	}
}
