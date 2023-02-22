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
 * main - Entry point
 *
 * Description: This function prints the characters "_putchar" followed by a newline
 *
 * Return: Always 0 (Success)
 *         or a non-zero value on error
 */
int main(void)
{
	char *co = "_putchar";

	while (*co)
	{
		_putchar(*co);
	co++;
	}
	_putchar('\n');
	return (0);
}
