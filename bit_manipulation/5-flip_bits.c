#include <stdio.h>
#include "main.h"
/**
 * flip_bits - a function that returns the number
 * of bits you would need to flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int be, zen;
	unsigned int count, i;

	count = 0;
	zen = 1;
	be = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (zen == (be & zen))
			count++;
		zen <<= 1;
	}
	return (count);
}
