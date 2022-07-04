#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all-a function that returns the sum of all its parameters.
 * @n: numbers of elements parameters
 * Return: sum x + y
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int x = 0;

	int sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	sum = 0;
	for (x = 0; x < n; x++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
