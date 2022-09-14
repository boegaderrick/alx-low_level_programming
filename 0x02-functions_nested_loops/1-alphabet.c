#include<stdio.h>

/**
 * print_alphabet - alphabet function
 *
 * description: prints alphabet
 *
 * Return:
 */

void print_alphabet(void)
{

	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar('\n');
	return;
}

/**
* main - entry point
* 
* Description: calls print_alphabet
*
* Return: 0
*/

int main(void)
{
	print_alphabet();
	return (0);
}
