#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Description: prints all minutes in a day
 */

void jack_bauer(void)
{
	int h, m;

	h = 00;

	while (h <= 23)
	{
		m = 00;

		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
