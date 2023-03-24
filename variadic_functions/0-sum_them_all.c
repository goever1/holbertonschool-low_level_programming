#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all numbers
 * @n: variadic inputs
 * Return 0 when n = 0, the sum of all numbers if success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, res = 0;
	va_list nums;
	
	if (n == 0)
		return (0);
	va_start(nums, n);
	for (; i < n; ++i)
		sum = va_arg(nums, unsigned int);
	va_end(nums);
	return (sum);
}
