#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string to a new memory location
 * @str: the string
 * Return: null if fail
 */
char *_strdup(char *str)
{
	char *po;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	for (; str[j] != '\0'; ++j)
	{
	}
	po = malloc((sizeof(char) * j + 1);
	for (;i < j; ++i)
		po[i] = str[i];
	if (po == NULL)
		return (NULL);
	return (po);
}
