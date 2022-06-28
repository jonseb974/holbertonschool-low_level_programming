#include "main.h"
#include <stdlib.h>

/**
 * _calloc- function that memory for an array using malloc.
 * @nmemb: int vector
 * @size:int
 * Return: int.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	i = j = 0;

	if (size != 0)
		arr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (malloc == NULL)
		return (NULL);
	_memset(arr, 0, nmemb * size)
		return (NULL);
	{
	return (arr);
}

/**
 * _memo - function fills memory with constant bytes.
 * @a: memory size.
 * @b: constant bytes.
 * @c: size of bytes
 * Return: char.
 */

void* _memset(char *a, char b, unsigned int c)
{
	unsigned int i;

	i = 0;

	while (i < c)
	{
		*(a + i) = b;
		i++;
		return (_memset);
	}
}
