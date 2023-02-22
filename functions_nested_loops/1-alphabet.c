#include "main.h"
/**
 * _putchar - It's calling the function before using it
 *
 * @c: the character to print
 *
 *Return: on success, returns the a character
 */
int _putchar(int c);
/**
 * print_alphabet - Prints the alphabet in lowcase, follow by a new line
 *
 * Return: on success, returns the alphabet
 */
void print_alphabet(void)
{
	int l = 97;

	while  (; l <= 122; l++)
		_putchar(l);
	_putchar('\n');
}
