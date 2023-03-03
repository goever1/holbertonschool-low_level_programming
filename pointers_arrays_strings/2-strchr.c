#include "main.h"
#include <string.h>
char *_strchr(char *s, char c)
{
	size_t l1 = strlen(s);
	int i = 0, j = 0, l = l1, *p;

	for (; i < l; ++i)
		if (s[i] == c)
		{
			*p = s[i];
			j++
		}
	if (j == 0)
		*p = '\0';
	return (*p);
}
