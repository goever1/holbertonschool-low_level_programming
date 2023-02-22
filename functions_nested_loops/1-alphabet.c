#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
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
