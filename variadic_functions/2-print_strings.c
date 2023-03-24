#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_string - print a string follow by a new line
 * @separator: string that separates the other string
 * @n: Amount of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ls;
	char *s;

	if (separator == NULL)
		separator = "\0";
	va_start(ls, n);
	for (; i < n; ++i)
	{
		s = va_arg(ls, char *);
		if (s != NULL)
			printf("%s%s", s, separator);
		else
			printf("(nil)%s", separator);
		if (i != (n-1))
		printf("%s",separator);
	}
	printd("\n");
	va_end(ls);
}
