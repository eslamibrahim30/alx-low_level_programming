#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: the address of the allocated array
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i;
	int j;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	else
	{
		grid = (int **)realloc(grid, height * sizeof(int *));
		if (!grid)
		{
			free(grid);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *)(realloc(grid[i], width * sizeof(int)));
			if (!grid[i])
			{
				for (; i >= 0; i--)
				{
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		return (grid);
	}
}
