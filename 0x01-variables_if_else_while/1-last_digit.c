#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: program checks for last digit of entered number
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int last_digit; n % 10

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if last_digit > 5
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if last_digit == 0
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if last_digit < 6 !0
	{
		puts("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}

	return (0);
}