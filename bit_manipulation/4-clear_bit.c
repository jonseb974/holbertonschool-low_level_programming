#include <stdio.h>
#include "main.h"
/**
 * clear_bit -a function that sets the value of
 * a bit to 0 at a given index.
 * @n: number
 * @index: target value
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	res = ~(1 << index);
	*n = *n & res;
	return (1);
}
