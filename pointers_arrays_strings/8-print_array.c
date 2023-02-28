#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - It prints the numbers that are in the "a" array
 * @a: points the array
 * @n: holds the amount of elements that are in the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (;i < n; ++i)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
