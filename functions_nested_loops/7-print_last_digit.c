#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld = (-1 * ld);
	}
	_putchar('0' + ld);
	return (ld);
}
