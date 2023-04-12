#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees grid which is previously allocated
 * @grid: the grid address
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
