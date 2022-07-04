#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers-function that prints numbers, followed by a new line.
 * @separator: string to be printed
 * @n: numbers of integers passed
 * Return: numbers followed by new line.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(arguments);

	unsigned int i;

	int j = 0;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(arguments, int);
		if (i < (n - 1) && separator != 0)
			printf("%d%s", j, separator);
		else
			printf("%d", j);
	}
	va_end(arguments);
	printf("\n");
}
