#include<stdio.h>

/**
* main - entry point
* 
* Description: calls print_alphabet
*
* Return: 0
*/

void print_alphabet(void);

int main(void)
{
	void print_alphabet(void);
	print_alphabet();
	return (0);
}

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
