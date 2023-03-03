#include "main.h"
#include <string.h>
char *_strchr(char *s, char c)
{
	int i = 0, l = strlen(s);

	for (; i < l; ++i)
		if (s[i] == c)
			return &s[i];
	if (c == '\0' && s[i] == '\0')
		return (&s[i]);
	return (NULL);
}
