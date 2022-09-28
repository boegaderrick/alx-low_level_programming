#include "main.h"

/**
* factorial - calculates factorial of given number
* @n: subject number
* Return: 1 if successful or -1 if not
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
