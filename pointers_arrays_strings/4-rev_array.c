#include "main.h"
/**
 * reverse_array - revers an array
 * @a: is the input array
 * @n: the number of element in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, rev = 0;

	for (; i < n; --n)
	{
		rev = a[i];
		a[i] = a[n - 1];
		a[n - 1] = rev;
		++i;
	}
}
