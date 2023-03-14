#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - it frees the memory location of the grid
 * @grid: input grid
 * @height: inpute size of the grid
 * Return: A free grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL || height != 0)
	{
		for (; i <= height; ++i)
			free(grid[i]);
		free(grid);
	}
}
