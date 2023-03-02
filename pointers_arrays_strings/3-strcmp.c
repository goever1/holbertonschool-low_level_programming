#include "main.h"
/**
 * _strcmp - compare the to strings in a ascii base
 * @s1:first string
 * @s2: second string
 *
 * Return: The diference of the 2 strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
