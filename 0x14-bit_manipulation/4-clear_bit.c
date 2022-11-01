#include "main.h"

/**
* clear_bit - unsets bit at given index
* @n: pointer to address of number to be altered
* @index: index of bit to be unset
* Return: 1 or -1 if error/s occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 32)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
