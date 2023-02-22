#include "main.h"
/**
 * _putchar - writes a character to stdout
 *
 * @c: the character to print
 *
 * Return: on success, returns the character written as a char
 */
int _putchar(char c);
/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char l = 'a';
	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
