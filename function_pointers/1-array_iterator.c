#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute a function using all array as parameter
 * @array: function arguments
 * @size: size of array
 * @action: Function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL || action != NULL)
	{
		for (; i < size; ++i)
			action(array[i]);
	}
}
