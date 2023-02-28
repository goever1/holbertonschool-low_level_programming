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

	char *reversed = (char*) malloc((l + 1) * sizeof(char));

	int z = 0;
	
	for (i = l - 1; i >= 0; i--, z++)
	       reversed[z] = s[i - 1];

	rivers[z] = '\0';
	strcpy(s, rivers);
	free(reversed);
}
