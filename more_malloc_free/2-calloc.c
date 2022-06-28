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
	char *ptr;

	char *one  = 0;

	char *two = 0;

	unsigned int i;

	unsigned int j;

	i = j = 0;

	if (size != 0)
		ptr = malloc(sizeof(ptr) * 2);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (nmemb != 0)
	{
		ptr[i] = one[i];
		i++;
	}
	while (size != 0)
	{
		ptr[j] = two[j];
		j++;
	}
	return (ptr);
}
