#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns 2 pointers to a two
 * dimensional array of integers.
 * @width: integer for rows.
 * @height: integer for col
 * Return: int.
 */

int **alloc_grid(int width, int height)
{
	int **arr;

	int i, j, k, l;

	i = j = k = 0;
	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int));

	if (arr == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(arr[l]);
			free(arr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			arr[j][k] = 0;
		return (arr);
	}
	return (arr);
}
