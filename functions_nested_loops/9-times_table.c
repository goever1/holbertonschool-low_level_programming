#include "main.h"
/**
 * times_table - Prints a 9x9 table with the table of 9
 */
void times_table(void)
{
	int n1, n2, r;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			r = n1 * n2;

			if ((r / 10) > 0)
			{
				_putchar((r / 10) + '0');
				_putchat((r % 10) + '0');
			}
			else
			{
				_putchar(' ')
				_putchar((r % 10) + '0');
			}
			if (n2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		if (n1 < 9)
		_putchar('\n');
	}
	_putchar('\n')
}
