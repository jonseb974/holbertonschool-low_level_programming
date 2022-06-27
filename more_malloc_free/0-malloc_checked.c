#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocate memory using malloc.
 * @b: unsigned int
 *
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(sizeof(b));

	if (i == NULL)
		exit(98);
	else
		return (i);
}
