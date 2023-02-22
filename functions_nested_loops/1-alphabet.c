#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowcase, follow by a new line
 */
void print_alphabet(void)
{
	char l = 'a';

	for (; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
