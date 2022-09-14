#include "main.h"

/**
 * _islower - entry point
 *
 * Description: checks if char is lowercase
 *
 * @c: character to be checked
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
