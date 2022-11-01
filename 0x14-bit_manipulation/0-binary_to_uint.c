#include "main.h"

/**
* _strlen - gets length of a string
* @b: subject string
* Return: length of string
*/
int _strlen(const char *b)
{
	int len;

	for (len = 0; b[len] != '\0'; len++)
	{
		;
	}
	return (len);
}

/**
* _pow - multiplies number to a given power
* @num: number to be multiplied
* @power: power extent
* Return: result of operation
*/
int _pow(int num, int power)
{
	int res = num;

	if (power == 0)
		return (1);
	if (power == 1)
		return (num);
	while (power > 1)
	{
		res *= num;
		power--;
	}
	return (res);
}

/**
* binary_to_uint - converts binary number to decimal
* @b: string containing binary number to be converted
* Return: decimal number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i, j;

	if (b == NULL)
		return (0);

	j = _strlen(b) - 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] != '0')
		{
			num += _pow(2, j);
		}
		j--;
	}
	return (num);
}
