#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: input 1st string
 * @s2: input 2nd string
 * @n: amount of characters to cancatenate
 * Return: Null when fail, 2 concatenated string if success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0;
	char *po;
	
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	po = malloc(sizeof(char) * (len1 + n + 1));
	if (po == NULL)
		return (NULL);
	for (i = 0; i < len1; ++i)
		po[i] = s1[i];
	for (i = 0; i < n; ++i)
		po[len1 + i] = s2[i];
	po[len1 + n] = '\0';
	return (po);
}
