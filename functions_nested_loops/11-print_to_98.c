#include "main.h"
/**
 * print_to_98 - Prints all numbers from n to 98
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}
