#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point point to program that performs operations
* @argc: number of arguments passed
* @argv: array of passed arguments
* Return: result
*/

int main(int argc, char *argv[])
{
	char operator;
	int (*i)(int, int), num1, num2, calc;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = *argv[2];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	i = get_op_func(argv[2]);

	if (!i)
	{
		printf("Error\n");
		exit(99);
	}
	calc = i(num1, num2);

	printf("%d\n", calc);
	return (0);
}
