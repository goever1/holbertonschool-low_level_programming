#include "main.h"
/**
 * factorial - Returns the facorial of N number
 * @n: is the input number
 *
 * Return: the factorial of N
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
