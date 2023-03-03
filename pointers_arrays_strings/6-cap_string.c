#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @n: Is the input
 *
 * Return: It prints the string with all words capitalized
 */
char *cap_string(char *n)
{
	int i = 0;

	for (; n[i] != '\0'; ++i)
	{
		if (n[i] - 1 == ' ' || n[i] == '\n')
			n[i] = n[i] - 32;
	}
	return (n);
}
