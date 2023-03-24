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
	int i = 0;
	va_list list;

	if(separator == NULL)
		exit;
	va_start(list, n);
	for (;i < (n - 1); ++i)
	{
		printf("%d", va_arg(list, const unsigned int));
		printf("%s", separator)
	}
	printf("\n");

	va_end(list);
}
