#include "main.h"
/**
 * *_memset - Give the valie of b to the memory space that is pointed in s
 * @s: the pointer to be modified
 * @b: the value to use as a modifier
 * @n: the amount of memory holders to be modified
 *
 * Return: It returns 's' after the modifications
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0, cha = n;

	for (; i < cha; ++i)
	{
		s[i] = b;
	}
return (s);
}
