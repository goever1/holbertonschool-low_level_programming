#include "main.h"
#include <string.h>
/**
 * *_strncpy - concatenates the text adding null character
 * @dest: destination
 * @src: source
 * @n: the amount of characters to be copy
 *
 * Return: The string cancatenated
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, deca = (*(&dest + 1) - dest);
	
	for (; i <= deca; ++i)
	{
		dest[i] = src[i];
		if (i > n)
			break;
	}
	return (dest);
}
