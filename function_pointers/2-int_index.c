#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - search for an integer
 * @array: Integers location
 * @size: array size
 * @cmp: pointer toi a the function to search
 * Return: -1 if fail, the integer if success
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (; i < size, ++i)
		{
			if (cmp(array[i] != 0)
					return (i);
		}
		return (-1)
	}
}					
