#include "main.h"
#include <string.h>
/**
 * *_strncat - It concatenates two pointers in the amount that is indicated
 * @dest: Destination of the concatenation
 * @src: the pointer of the string to be concatenated
 * @n: amount of character to be concatenated
 *
 * Return: the result of the concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t l1 = strlen(dest);

	int ld = l1, i = 0;

	ld = (' ');
	for (; ld + 1 < n; ++ld)
	{
		dest[ld] = src[i];
		++i;
	}
	return (dest);
}
