#include "main.h"
#include <string.h>
char *_strncpy(char *dest, char *src, int n)
{
	size_t l1 = strlen(dest);

	int l = l1, i = 0, mrk = (l + n), arca = (*(&dest + 1) - dest);
	
	if (arca > mrk)
		for (; l < mrk; ++l)
		{
			*(dest + l) = *(src + i);
			++i;
		}
	dest[arca] = '\0';
	return (dest);
}
