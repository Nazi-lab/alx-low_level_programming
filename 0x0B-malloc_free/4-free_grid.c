#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * Free_grid - frees 2d array
 * @grid: 2d grid
 * @height: Height dimension of grid
 * Description: Frees memory of grid
 * Return: Nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

