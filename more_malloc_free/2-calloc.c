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

	char *j;

	unsigned int i;

	i = 0;

	if (size != 0)
	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	j = arr;

	for (i = 0; i < (nmemb * size); i++)
		j[i] = '\0';

	return (arr);
}
