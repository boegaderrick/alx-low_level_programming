#include <stdio.h>

/**
* main - prints number of arguments passed
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] < argv[argc]; i++)
		;
	printf("%d\n", argc - 1);
	return (0);
}
