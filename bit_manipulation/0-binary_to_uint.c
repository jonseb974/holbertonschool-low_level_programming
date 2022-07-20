#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: pointer
 * Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;/*length of the number*/

	if (!b)
		return (0);
	for (i = 0; *b; b++)
	{
		if (*b == '1')
			i = (i << 1) | 1;
		else if (*b == '0')
			i = i << 1;
		else
			return (0);
	}
	return (i);
}
