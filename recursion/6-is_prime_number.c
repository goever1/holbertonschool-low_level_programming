#include "main.h"
/**
 * check_prime - checks if the number is prime
 * @n: input to identify
 * @i: is the result of n/2
 *
 * Return: if the number is prime
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i - 1));
}
/**
 * is_prime_number - detects if the number is prime or not
 * @n: the number to identify
 *
 * Return: 1 if the number is primer, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (check_prime(n, n / 2) > 0)
		return (1);
	return (0);
}
