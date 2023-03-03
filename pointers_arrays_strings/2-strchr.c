#include "main.h"
#include <string.h>
/**
 * *_strchr - retunr a pinter if the character in c is found in the string
 * @s: the string to find the character
 * @c: the charachter to be found
 *
 * Return: null if the character is found or the pointer if its found
 */
char *_strchr(char *s, char c)
{
	int i = 0, l = strlen(s);

	for (; i < l; ++i)
		if (s[i] == c)
			return (&s[i]);
	if (c == '\0' && s[i] == '\0')
		return (&s[i]);
	return (NULL);
}
