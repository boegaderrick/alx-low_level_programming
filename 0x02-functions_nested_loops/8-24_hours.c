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
	m = 00;

	while (h <= 23)
	{
		while (m <= 59)
		{
			_putchar(h);
			_putchar(':');
			_putchar(m);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
