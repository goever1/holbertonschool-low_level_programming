#include "search_algos.h"

/**
 * linear_search - it performs a linear search algorithm to an array
 * @array: pointer to the an array
 * @size: size of the array
 * @value: value to search in the array
 * Return: First index where value is found, or -1 if fial
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i == size)
		i = -1;
	return (i);
}
