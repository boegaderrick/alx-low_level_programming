#include "main.h"

/**
* set_bit - sets bit at given index to 1
* @n: pointer to address of int to be modified
* @index: index of bit to be set
* Return: 1 or -1 if error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 32)
		return (-1);
	*n |= (1 << index);
	return (1);
}
