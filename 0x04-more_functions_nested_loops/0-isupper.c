#include "main.h"
/**
 * _isupper - check if letter is uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if true and 0 if otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
