#include "main.h"
/**
 * set_bit - sets the value of a bit
 * @n: integer to change
 * @index: index
 * Return: 1 on success, -1 when fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	(*n) = (*n) | (1 << index);
	return (1);
}
