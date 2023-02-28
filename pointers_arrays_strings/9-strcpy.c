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
	int i = 0;

	for (; src[i] != '\0'; ++i)
		dest[i] = src[i];
	return (dest);
}
