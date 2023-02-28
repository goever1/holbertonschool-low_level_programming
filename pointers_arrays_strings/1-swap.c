#include "main.h"
/**
 * swap_int - It isswaping the values of a and b
 * @a: firt integrer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

