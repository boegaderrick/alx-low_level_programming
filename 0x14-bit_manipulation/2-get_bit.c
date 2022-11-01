#include "main.h"

/**
* get_bit - gets value of a bit at given index
* @n: subject binary number
* @index: index at which bit is located
* Return: value of bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	int value = n >> index & 1 ? 1 : 0;

	return (value);
}
