/**
 * alloc_grid - creates a two dimensional array in a newly
 * allocated memory space
 * @width: determines the width of the array
 * @height: determines the height of the array
 *
 * Return: pointer to a 2D array
 */
#include "main.h"
#include <stddef.h>
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
