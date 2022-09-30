#include <stdio.h>
#include <stdlib.h>

/**
* main - gets sum of arguments
* @argc: number of arguments passed
* @argv: array of arguments
* Return: 0 if no errors, 1 if error occured
*/

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("0\n");
	return (0);
}
