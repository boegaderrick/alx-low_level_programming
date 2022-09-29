#include "main.h"

/**
* squareroot - find square root
* @n: square
* @d: test int
* Return: square root or -1 if no square root
*/

int squareroot(int n, int d)
{
	if (d * d == n)
	{
		return (d);
	}
	if (n > d)
	{
		return (squareroot(n, d + 1));
	}
	return (-1);
}

/**
* _sqrt_recursion - calls squareroot function
* @n: square
* Return: return from squareroot function
*/

int _sqrt_recursion(int n)
{
	int result, divisor;

	divisor = 1;

	result = squareroot(n, divisor);
	return (result);
}
