#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0, cha = n;

	for (;i < cha; ++i)
	{
		s[i] = b;
	}
return (s);
}
