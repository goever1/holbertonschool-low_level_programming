#include "main.h"
#include <string.h>
char *_strchr(char *s, char c)
{
	size_t l1 = strlen(s);
	int i = 0, l = l1;

	for (; i < l; ++i)
		if (s[i] == c)
		{
			return &s[i]
		}
	return (NULL);
}
