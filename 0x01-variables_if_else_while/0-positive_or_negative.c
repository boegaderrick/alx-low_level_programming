#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: the program checks whether input is positive or negative
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The number is positive\n");
	}
	else if (n == 0)
	{
		printf("The number is zero\n");
	}
	else if (n < 0)
	{
		printf("The number is negative\n");
	return (0);
}
