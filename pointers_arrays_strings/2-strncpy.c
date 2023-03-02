#include "main.h"
#include <string.h>
char *_strncpy(char *dest, char *src, int n)
{
	size_t l1 = strlen(dest);

	int l = l1, i = 0, z = 0, srca = (*(&src + 1) - src);
	
	for (; l < n; ++l)
		{
			dest[l] = *(src + i);
			++i;
			if (n > srca)
			{
				dest[z] = '\0';
				++z;
			}
		}
	
	return (dest);
}
