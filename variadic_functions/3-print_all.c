#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ls;
	int i = 0;
	char *str, *sep = "";

	va_start(ls, format);
	while (format[i])
	{
		switch (fromat[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ls, int));
				break;
			case 'i':
				printf("%s%i", sep, va_arg(ls, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ls, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
