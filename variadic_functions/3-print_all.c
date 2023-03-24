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
	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", va_arg(ls, int), sep);
					break;
				case 'i':
					printf("%s%i", va_arg(ls, int), sep);
					break;
				case 'f':
					printf("%s%f", va_arg(ls, double), sep);
					break;
				case 's':
					str = va_arg(ls, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", str, sep);
					break;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ls);
}
