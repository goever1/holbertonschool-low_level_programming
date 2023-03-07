#include "main.h"
/**
 * _print_rev_recursion - It returns the string in reverse
 * @s: in pointing to the string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	_putchar('\n');
}
