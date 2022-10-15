#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings
* @separator: parameter to separate strings
* @n: number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (n > 0)
	{
		va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(strings, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			if (separator != NULL && i <= (n - 2) && i > 1)
			{
				printf("%s", separator);
			}
		}
		va_end(strings);
	}
	printf("\n");
}
