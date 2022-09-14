#include "main.h"

/**
 * _isalpha - entry point
 *
 * Description: check if character is letter
 *
 * @c: character to be checked
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
