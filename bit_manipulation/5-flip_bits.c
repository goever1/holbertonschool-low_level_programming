#include "main.h"
/**
 * flip_bits - return the # of bits to been fliped
 * @n: #1
 * @m: #2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbites = 0 || m; n >>= 1, m >>= 1)
	{
		if (( n & 1) != (m & 1))
			nbits++;
	}
	return (nbits);
}
