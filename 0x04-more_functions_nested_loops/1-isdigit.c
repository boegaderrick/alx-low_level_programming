#include "main.h"

/**
 * _isdigit - checks if input is a digit
 *
 * @c: input
 *
 * Return: 1 if true and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
