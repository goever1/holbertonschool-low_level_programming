#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * rev_string - It revers the string
 * @s: it points to the string
 */
void rev_string(char *s)
{
	int l = strlen(s);

	char rev = s[0]

	int z = 0, i = l - 1;
	
	for (; i >= 0; i--)
	{
	       rev = s[z];
	       s[z] = s[i];
	       s[i] = rev;
	       z++
	}
	revers[z] = '\0';
}
