#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index where value is located
 * or -1.
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (help_search(array, value, 0, size - 1));
}
/**
 * help_search - recursive search value in the array
 * @array: array of data
 * @value: target value
 * @min: lower index
 * @max: bigger index
 *
 * Return: index of the target value
 * or -1
 */
int help_search(int *array, int value, size_t min, size_t max)
{
	size_t mid;

	array_print(array, min, max);
	if (max == min && array[min] != value)
		return (-1);

	mid = ((max - min) / 2) + min;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (help_search(array, value, mid + 1, max));
	if (array[mid] > value)
		return (help_search(array, value, min, mid - 1));
	return (-1);
}

/**
 * array_print - print an array of data
 * @array: pointer to array.
 * @min: index mini.
 * @max: index maxi.
 */

void array_print(int *array, size_t min, size_t max)
{
	size_t i;

	printf("Searching in array: ");
	for (i = min; i <= max; i++)
	{
		printf("%d", array[i]);
		if (i < max)
			printf(", ");
	}
	printf("\n");
}
