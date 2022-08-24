#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	if (size >= 1)
	{
		int mid = 1 + (size - 1) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_search(array, i, mid - 1, value));
		return (binary_search(array, mid + 1, size, value));
	}
}
