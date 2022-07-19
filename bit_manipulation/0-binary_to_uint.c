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
	unsigned int conv = 1; /*conversion*/
	unsigned int i = 0;
	unsigned int len; /*length of the number*/
	int j;

	len = strlen(b); /*define length*/

	if (b == NULL)
		return (0);
	for (j = len - 1; j >= 0; j--)
	{
		if (b[len] != '0' && b[j] != 1)
			return (0);
		if (b[i] == '1')
		{
			i += conv;
		}
		conv *= 2;
	}
	return (i);
}

/**
 * _pow_recursion - function that returns, value
 * of x raised to the power of y.
 * @x: number
 * @y: number pow
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

/**
 * _sterlen -function that returns, length of a string
 * @s: pointer.
 * Return: int.
 */

int _sterlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
