#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - is used to check if malloc worked or not
 * @b: input
 * Return: 98 if malloc failed
 */
void *malloc_checked(unsigned int b)
{
	void *po;

	po = malloc(b);
	if (po = NULL)
		exit(98);
	return (po);
}
