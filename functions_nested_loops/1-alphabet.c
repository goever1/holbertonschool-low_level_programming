#include "main.h"
/**
 * _putchar - It's calling the function before using it
 *
 * @c: the character to print
 *
 *Return: on success, returns 0
 */
int _putchar(int c);
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Prints the alphabet in lowcase, follow by a new line
 *
 * Return: on success, returns the alphabet
 */
void print_alphabet(void)
{
	int l;

	for (l = 97 ; l <= 122; l++)
		_putchar(l);
	_putchar('\n');
}
