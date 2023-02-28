#include "main.h"
/**
 * swap_in - It isswaping the values of a and b
 * @a: firt integrer
 * @b: second integer
 * @c: it is used to save the value of a to give it to b
 */
void swap_int(int *a, int *b)
{
	int c;
	c = a;
	a = b;
	b = c;
}

