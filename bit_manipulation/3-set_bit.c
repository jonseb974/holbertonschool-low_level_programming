#include <stdio.h>
#include "main.h"
/**
 * set_bit - seta function that sets the value
 * of a bit to 1 at a given index.
 * @n: number
 * @index: target value
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	res = 1 << index;
	*n = *n | res;
	return (1);
}
