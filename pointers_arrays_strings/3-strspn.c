#include "main.h"
/**
 * _strspn - returns the amount of times a character of a string is found
 * @accept: the character to be count
 * @s: the string to capare
 *
 * Return: the number of caracter that are found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, cont = 0, j = 0, stop = 0;

	for (; s[i] != '\0'; ++i)
	{
		for (; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				cont++;
				stop++;
				if (stop == 1)
				{
					j = 0;
					stop--;
				}
				else
					break;
			}
		}
	}
	return (cont);
}
