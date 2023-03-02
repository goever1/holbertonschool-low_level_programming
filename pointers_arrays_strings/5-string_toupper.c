#include "main.h"
/**
 * *string_toupper - change the string to uppercase
 * @*: is the input
 */
char *string_toupper(char *)
{
	while (* != '\0')
	{
	* = * - ('a' - 'A');
	*++;
	}
}
