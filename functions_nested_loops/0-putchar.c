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
 * main - entry point
 *
 * Description: This function prints the characters "_putchar"
 *
 * Returns: Always 0 (Success)
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
