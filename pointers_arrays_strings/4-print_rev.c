#include "main.h"
#include <string.h>
#include <stdio.h>
void print_rev(char *s)
{
	size_t l = strlen(s);

	int i = l;

	for (; i != 0; --i)
		printf("%c", s[i - 1]);
	printf("\n");
}
