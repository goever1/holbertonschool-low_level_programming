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
	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'}, cap = 0, x = 0;

	for (; n[i] != '\0'; ++i)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - cap;
		cap = 0;
		for (x = 0; x <= 12; x++)
		{
			if (n[i] == separators[x])
			{
				x = 12;
				cap = 32;
			}
		}

	}
	return (n);
}
