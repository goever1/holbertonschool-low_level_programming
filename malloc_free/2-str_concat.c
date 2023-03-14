#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings in new memory
 * @s1: string #1
 * @s2: string #2
 * Return: null if fail, two strings concatenated if success
 */
char *str_concat(char *s1, char *s2)
{
	int leng1 = 0, leng2 = 0, i = 0;
	char *po;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[leng1] != '\0'; ++leng1)
	{
	}
	for (; s2[leng2] != '\0'; ++leng2)
	{
	}
	po = malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (po == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; ++i)
		po[i] = s1[i];
	for (i = 0; s2[i] != '\0'; ++i)
		po[leng1 + i] = s2[i];
	po[leng1 + leng2] = '\0';
	return (po);
}
