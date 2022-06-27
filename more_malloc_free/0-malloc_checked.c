#include "main.h"
/**
 * malloc_checked - function allocate memory using malloc.
 * @b: unsigned int
 *
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = 0;

	i = malloc(b);

	if (i == NULL)
		return (98);
	else
		return (i);
}
