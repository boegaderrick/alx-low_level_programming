#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times
 */

void more_numbers(void)
{
	int line;
	int i;

	for (line = 0; line < 10; line++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		i = 0;
	}
}
