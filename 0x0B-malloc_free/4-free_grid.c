#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees the memory allocated for a 2D integer array (grid).
 * @grid: Pointer to the 2D grid.
 * @height: Height dimension of the grid.
 *
 * This function iterates through each row of the grid and frees the memory
 * allocated for each row. Finally, it frees the memory allocated for the grid.
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
