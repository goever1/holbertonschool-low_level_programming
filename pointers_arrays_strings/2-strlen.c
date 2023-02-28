#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - It returns the length of the string in *s
 * @s: is the location of the string
 *
 * @l: is the variable to hold the output of strlen
 *
 * return: it will retunr the length of the string
 */
int _strlen(char *s)
{
	size_t l = strlen(s);

	return ((int)l);
}
