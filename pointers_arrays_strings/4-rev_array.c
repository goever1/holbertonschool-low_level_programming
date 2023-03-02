#include "main.h"
/**
 * reverse_array - revers an array
 * @a is the input array
 * @n the number of element in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, front = 0;

	for (; i < n; ++i)
	{
		front = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = front;
	}
}
