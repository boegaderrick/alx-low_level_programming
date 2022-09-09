#include<stdio.h>

/**
 * main - program entry point
 *
 * Description: prints alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char alpha;

	alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
