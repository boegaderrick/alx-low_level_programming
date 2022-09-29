#include "main.h"

/**
* primefinder - checks if number is prime
* @n: number to be checked
* @d: variable to aid in checking
* Return: 0 if not or 1 if true
*/

int primefinder(int n, int d)
{
	if (d * d == n)
	{
		return (0);
	}
	else if (n < 2)
	{
		return (0);
	}
	else if (n > d)
	{
		return (primefinder(n, d + 1));
	}
	else
	{
		return (1);
	}
}

/**
* is_prime_number - calls primefinder function
* @n: number to be checked by primefinder function
* Return: primefinder function's Return value
*/

int is_prime_number(int n)
{
	int result, divisor;

	divisor = 2;

	result = primefinder(n, divisor);
	return (result);
}
