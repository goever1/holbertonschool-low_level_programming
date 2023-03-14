#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size inpuit
 * @c: char
 * Return: null when fail, a string if siccess
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);
	for (; i < size; ++i)
		array[i] = c;
	return (array);
}
