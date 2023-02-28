#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - It revers the string
 * @s: it points to the string
 */
void rev_string(char *s)
{
	int l = strlen(s);

	char rev = s[0];

	int z = 0;
	
	for (i = l - 1; i > z ; i--)
	{
	       rev = s[z];
	       s[z] = s[i];
	       s[i] = rev;
	       z++;
	}
}
