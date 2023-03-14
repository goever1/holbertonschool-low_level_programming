#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - it inizialice all grid positions with 0
 * @width: width input
 * @heigth: height input
 * Return: null when fail, the grid with 0 when success
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **po;
	if (width <= 0 || heigth <= 0)
		return (NULL);
	po = malloc(sizeof(int) * height);
	if (po == NULL)
		return (NULL);
	for (; i < height; ++i)
	{
		po[i] = malloc(sizeof(int) * width);
		for (; j < width; ++j)
			po[i][j] = 0;
	}
	return (po);
}
