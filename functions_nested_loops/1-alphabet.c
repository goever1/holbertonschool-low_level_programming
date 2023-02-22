#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowcase, follow by a new line
 */
void print_alphabet(void)
{
	int l = 97;

	for (; l <= '122'; l++)
		_putchar(l);
	_putchar('\n');
}
