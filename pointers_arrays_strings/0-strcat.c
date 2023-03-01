#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - It concatenates two strings
 * @dest: It is the destination of the procces
 * @src: points the string that is going to be concatenated
 *
 * Return: It returns the concatenation of the two pointers
 */
char *_strcat(char *dest, char *src)
{
	size_t l1 = strlen(dest), l2 = strlen(src);

	int ld = l1, i = 0, ls = l2, r = (ls + ld);
	
	ld = (' ');
	for(; ld + 1 < r; ++ld)
	{
		dest[ld] = src[i];
		++i;
	}
	dest[r]= '\0';
	return (dest);
}
