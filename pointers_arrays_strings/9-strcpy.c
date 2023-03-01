#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - It copies the string of "src" and paste it to "dest"
 * @dest: the destination of the copy
 * @src: the original string
 *
 * Return: the dest array
 */
char *_strcpy(char *dest, char *src)
{
	size_t l1 = strlen(src);

	int i = 0, l = l1;

	for (; i < l ; ++i)
		dest[i] = src[i];
	dest[l] = '\0';
	return (dest);
}
