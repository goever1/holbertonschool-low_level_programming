#include "main.h"
/**
 * _strlen_recursion - It returns the length of a string
 * @s: the string whose length is to be determined
 *
 * Return; the length of the string
 */
int _strlen_recursion(char *s)
{
	int cont = 0;

	if (*s != '\0')
	{
		++s;
		cont = 1 + _strlen_recursion(s);
	}
	return (cont);
}
