#include "main.h"
/**
 * *leet - is chganging some letters of the input to numbers
 * @str: the input
 *
 * Return: the string modified
 */
char *leet(char *str)
{
	int i = 0, j = 0, code[] = {'4', '3', '0', '7', '1'}
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'}

	for (; str[i] != '\0'; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (str[i]) == let[j])
			{
				str[i] = code[j / 2];
				j = 10;
			}
		}
	}
	str[i] = '\0';
	return (str);
}
