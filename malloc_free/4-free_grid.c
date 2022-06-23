#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously
 * created by alloc_grid function.
 * @grid:pattern of int
 * @height: grid of int
 * Return: int.
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
