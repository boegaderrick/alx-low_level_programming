#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - sums all inputs of variadic func
* @n: total number of inputs
* Return: sum or 0 if n < 1
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list nums;

	if (n < 1)
	{
		return (0);
	}
	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
