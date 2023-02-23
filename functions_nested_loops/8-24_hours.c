#include "main.h"
/**
 * jack_bauer - prints the hour in 24h style
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 5; m++)
		{
			_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
				_putchar(':');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar('\n');
		}
	}
}

