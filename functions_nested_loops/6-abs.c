#include "main.h"
/**
 * _abs - retunrs the absolute value of an integral
 *
 *@n: Is the variable
 *
 * Return: If n is smoller than 0 returns negative, otherwise positive
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
