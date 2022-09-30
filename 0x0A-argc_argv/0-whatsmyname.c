#include <stdio.h>
#include <stdlib.h>

/**
* main - prints program's name
* @argc: variable holdin number of arguments passed
* @argv: pointer to array of arguments passed
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < 1 && argc >= 0; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
