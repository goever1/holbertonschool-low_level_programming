#include "main.h"
/**
 * main - Prints the alphabet in lowercase.
 */
void print_alphabet(void)
{
	int l;

	for(l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
