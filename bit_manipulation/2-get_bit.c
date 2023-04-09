#include "main.h"
/**
 * get_bit - returns hte value of a bit
 * @n: number to search
 * @index: the list to lookf for the number
 * Return: value fo the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ret;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	n = n >> index;
	ret = n & 1;
	return (ret);
}
