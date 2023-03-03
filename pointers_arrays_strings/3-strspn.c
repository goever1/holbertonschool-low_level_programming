#include "main.h"
/**
 * _strspn - returns the amount of times a character of a string is found
 * @accept: the caracter to be count
 *
 * Return: the number of caracter that are found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, cont = 0;
	for (; s[i] != '\0'; ++i)
	{
		for (; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
				cont++;
			else
				break;
		}
	}
	return (cont);
}
