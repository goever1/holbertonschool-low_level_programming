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
	int i = 0; 
	
	for (; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
