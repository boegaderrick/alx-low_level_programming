#include <stdio.h>
#include <stdlib.h>

/**
* main - finds the product of argvs
* @argc: argument count
* @argv: argument array
* Return: 0 if successful or 1 if operation failed
*/

int main(int argc, char *argv[])
{
	int prod, i;

	prod = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			prod = prod * atoi(argv[i]);
		}
		printf("%d\n", prod);
		return (0);
	}
	printf("Error\n");
	return (1);
}
