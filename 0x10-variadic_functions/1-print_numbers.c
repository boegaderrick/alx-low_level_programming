#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - prints numbers
* @separator: pointer to string that separates each number
* @n: count of numbers to be printed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list param;

	if (n > 0)
	{
		va_start(param, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(param, int);
			printf("%d", num);
			if (separator != NULL && i <= (n - 2))
			{
				printf("%s", separator);
			}
		}
	}
	/*va_end(param);*/
	printf("\n");
	va_end(param);
}
