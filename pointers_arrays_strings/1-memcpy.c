#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, cha = n;

	for (; i < cha; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
