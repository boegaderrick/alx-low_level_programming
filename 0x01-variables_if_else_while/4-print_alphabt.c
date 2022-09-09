#include<stdio.h>
/**
 * main - entry point
 *
 * Description: Prints alphabets except q and e
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e')
		{
			alphabet++;
		}
		else if (alphabet == 'q')
		{
			alphabet++;
		}
		else
		{
			putchar(alphabet);
			alphabet++;
		}
	}
	putchar('\n');
	return (0);
}
