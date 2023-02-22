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
 * Description: The function prints the characters "_putchar" and a newline
 *
 * Return: Always 0 (Success)
 *         or a non-zero value on error
 */
int main(void)
{
	char *co = 97;
	while (*co < 123)
	{
		_putchar(*co);
		co++;
	}
	_putchar('\n');

}
