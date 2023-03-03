#include "main.h"
/**
 * *_memcpy - copies the memory area
 * @dest: destination to copy
 * @src: source to be copy
 * @n: the amount of memory to be copy
 *
 * Return: the destination after been modify
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, cha = n;

	for (; i < cha; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
