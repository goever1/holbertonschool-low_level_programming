#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - It prints a string in reverse
 * @s: it points the string
 */
void print_rev(char *s)
{
	size_t l = strlen(s);

	int i = l;

	for (; i != 0; --i)
		printf("%c", s[i - 1]);
	printf("\n");
}
