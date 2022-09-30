#include <stdio.h>
#include <stdlib.h>

/**
* main - calculates num of coins to give back as change for given value
* @argc: number of arguments passed
* @argv: array of arguments passed
* Return: 0 if no error encountered, 1 if error encoutered
*/

int main(int argc, char *argv[])
{
	int i, final = 0, result, change;
	int coin[5] = {25, 10, 5, 2, 1};

	change = atoi(argv[argc - 1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[argc - 1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; coin[i]; i++)
	{
		result = change / coin[i];
		change = change % coin[i];
		final = final + result;
	}
	printf("%d\n", final);
	return (0);
}
