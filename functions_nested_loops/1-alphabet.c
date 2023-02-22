#include "main.h"
/**
 * print:alphabet - Prints the alphabet follow by a new line
 *
 * Description: Prints the alphabet 
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
