#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - Prints every character of a string in jumping in by 2
 * @str: points the string
 */
void puts2(char *str)
{
	size_t l = strlen(str);

	int i = l, z = 0;

	for (; z < i; z += 2)
		printf("%c", str[z]);
	printf("\n");
}
