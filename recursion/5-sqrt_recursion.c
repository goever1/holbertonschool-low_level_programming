#include "main.h"
/**
 * sqr - auxiliar for _sqr_recursion
 * @n: number to find sqrt
 * @i: possible sqrt
 *
 * Return: i if it has a sqrt, -1 if not
 */
int sqr(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if (i < n)
		return (sqr(n, i+ 1));
	return (-1);
}
/**
 * _sqrt_recursion - return the sqrt of n
 * @n: number to find sqrt
 *
 * Return: the sqrt if it has or -1 if not
 */
int _sqrt_recursion(int n)
{
       int i = 0;
       return (sqr(n,i));
}
