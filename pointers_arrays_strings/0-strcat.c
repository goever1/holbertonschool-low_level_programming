#include "main.h"
#include <stdio.h>
/**
 * *_strcat - It concatenates two strings
 * @dest: It is the destination of the procces
 * @src: points the string that is going to be concatenated
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
