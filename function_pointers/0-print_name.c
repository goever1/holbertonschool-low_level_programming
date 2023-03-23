#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - it prints a name
 * @name: name
 * @f: pointer to a function
 * Return: null if fail
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
