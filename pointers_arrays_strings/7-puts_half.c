#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - It prints the 2 half of the string if odd i=(l-1)/2
 * @str: points the string
 */
void puts_half(char *str)
{
	size_t s = strlen(str);

	int i = 0, l = s;

	if ((l % 2) == 0)
		i = l / 2;
	else
		i = (l - 1) / 2;
	for (; i < l; ++i)
		printf("%c", str[i]);
	printf("\n");
}

