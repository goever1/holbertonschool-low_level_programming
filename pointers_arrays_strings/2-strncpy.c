#include "main.h"
#include <string.h>
char *_strncpy(char *dest, char *src, int n)
{
	size_t l1 = strlen(dest);

	int l = l1, i = 0, mrk = (ld + n), arca = (*(&dest + 1) - dest);

	for (; ld < mrk; ++ld)
	{
		if (arca < mrk)
			break;
		dest[ld] = arc[i];
		++i;
	}
	dest[arca] = '\0';
	return (dest);
}
