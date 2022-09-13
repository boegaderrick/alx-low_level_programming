#include<stdio.h>

/**
 * print_alphabet - alphabet function
 *
 * description: prints alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{

	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	print_alphabet = alphabet;
	putchar('\n');
	return (0);
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
