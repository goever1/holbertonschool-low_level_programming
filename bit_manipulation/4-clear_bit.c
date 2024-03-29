#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: integer to change
 * @index: index
 * Return: 1 when success, -1 when fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	(*n) = (*n) & (~(1 << index));
	return (1);
}
