#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print a list of numbers
 * @separator: comma space
 * @n: elemnt to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	if(separator == NULL)
		separator = '\0';
	va_start(list, n);
	for (;i < n; ++i)
	{
		printf("%d", va_arg(list, const unsigned int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
