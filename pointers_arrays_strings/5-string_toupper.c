#include "main.h"
/**
 * *string_toupper - change the string to uppercase
 * @*: is the input
 */
char *string_toupper(char *n)
{
	while (*n != '\0')
	{
	*n = *n - ('a' - 'A');
	n++;
	}
}
