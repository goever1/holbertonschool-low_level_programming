#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - count from min to max
 * @min: input minimum number
 * @max: input maximum number
 * Return: the counter when success, null when fail
 */
int *array_range(int min, int max)
{
	int i = 0, len = 0, *po;

	if (min > max)
		return (NULL);
	for (; len < (max - min); ++len)
		;
	po = malloc(sizeof(int) * (len + 1));
	if (po == NULL)
		return (NULL);
	for (; i <= len; ++i)
		po[i] = min++;
	return (po);
}
