#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints 1-100, prints fizz/buzz/fizzbuzz for multiples of 5 & 3
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("\n");
	return (0);
}
