#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns 2 pointers to a two
 * dimensional array of integers.
 * @width: integer for rows.
 * @height: integer for col
 * Return: integer.
 */

int **alloc_grid(int width, int height)
{
	char **grid;

	int i, j, k, l;

	i = j = k = 0;
	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			grid[j][k] = 0;
	}
	return (grid);
}
