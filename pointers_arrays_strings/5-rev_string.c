#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - It revers the string
 * @s: it points to the string
 */
void rev_string(char *s)
{
	int i = strlen(s);

	int z = 0;
	
	char rivers[i + 1];
	
	for (;i ! < 0; --i)
	{
		rivers[z] = s[i - 1];
		++z;
	}
	rivers[z] = '\0';
	strcpy(s, rivers);
}
