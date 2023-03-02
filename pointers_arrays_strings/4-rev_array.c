#include "main.h"
void reverse_array(int *a, int n)
{
	int i = 0, front = 0;

	for (; i < n; ++i)
	{
		front = a[i];
		a[i] = a[n - i];
		a[n - i] = front;
	}
}
