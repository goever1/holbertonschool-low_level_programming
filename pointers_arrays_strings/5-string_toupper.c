#include "main.h"
#include <string.h>
/**
 * *string_toupper - change the string to uppercase
 * @*: is the input
 */
char *string_toupper(char *n)
{
	int i = 0;

	for (; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
