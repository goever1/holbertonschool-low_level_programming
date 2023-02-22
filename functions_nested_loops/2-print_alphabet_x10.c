#include "main.h"
/**
 * print_alphabet_x10 - prints the akphabet 10 times
 */
void print_alphabet_x10(void)
{
	char l = 'a';
	
	int n;

	for (n = 1 ; l <= 10; n++)
	{
		for (; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
		l = 'a';
	}
}
