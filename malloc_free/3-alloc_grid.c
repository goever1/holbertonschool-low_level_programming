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
	int i = 0, j = 0, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (; i < height; ++i)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j= 0; j < i; ++j)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; ++j)
			po[i][j] = 0;
	}
	return (grid);
}
