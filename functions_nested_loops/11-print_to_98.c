#include "main.h"
/**
 * print_to_98 - Prints all numbers from n to 98
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			if (n > 0)
			{
				n++;
			}
			else
			{
				-putchat('-');
				n--;
			}
		}
		else if (n > 98) 
		{
			n--;
		}
		if (n == 98)
		{
			-putchar(n);
		}
		else
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}

}
