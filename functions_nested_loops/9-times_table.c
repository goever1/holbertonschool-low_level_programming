#include "main.h"
/**
 * times_table - Prints a 9x9 table with the table of 9
 */
void times_table(void)
{
	int n1, n2, r, len;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			r = n1 * n2;
			if (n2 > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (r < 10)
			{
				_putchar(' ');
				_putchar(' ');
				len = 2;
			}
			else if (r < 100)
			{
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				len = 3;
			}
			else
			{
				_putchar((r / 100) + '0');
				_putchar((r / 10) % 10 + '0');
				_putchar((r % 10) + '0');
				len = 4;
			}
			if (n2 == 9)
			{
				_putchar('\n');
			}
			else
			{
				while (len < 4)
				{
					_putchar(' ');
					len++;
				}
			}
		}
	}
}
