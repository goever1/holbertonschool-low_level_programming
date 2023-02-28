#include "main.h"
#include <string.g>
#include <stdio.h>
void puts2(char *str)
{
	size_t l = strlen(str);

	int i = l;

	for (; i < l; i += 2)
		printf("%c", str[i]);
	printf("\n");
}
