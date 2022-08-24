#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search -  function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to first element.
 * @size: numbers of elements in the array.
 * @value: target value.
 *
 * Return: integer value or -1 .
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
