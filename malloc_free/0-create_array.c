#include "main.c"
/**
 * create_array - creates an array of chars and it initializes with a specific char
 * @size: size inpuit
 * @c: char
 * Return: null when fail, a string if siccess
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	array = malloc(sizeof (char) * size);

	if (size == 0 || araay == NULL)
		return (NULL);
	for (; i < size; ++i)
		array[i] = c;
	return (array);
}
