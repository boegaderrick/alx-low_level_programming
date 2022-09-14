#include "main.h"

/**
 * _abs - entry point
 *
 * Description: checks absolute value
 *
 * @int: number to be checked
 *
 * Return: 0
 */

int _abs(int i)
{
	if (i >= 0)
	{
		_putchar(i);
	}
	else
	{
		_putchar(-i);
	}
	return (0);
}
