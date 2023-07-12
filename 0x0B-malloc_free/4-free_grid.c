/**
 * free_grid - frees a memory space where a two dimensuonal array
 * lives
 * @grid: two dimensional array
 * @height: height of the 2D array
 *
 * Return: nothing
 */
#include "main.h"
#include <stdlib.h>
#include <stddef.h>

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

