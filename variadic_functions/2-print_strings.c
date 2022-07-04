#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings-function that prints strings, followed by a new line.
 * @separator: string to be printed.
 * @n: number of strings passed
 * Return: string, and new line.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(arguments);

	unsigned int i;

	char *str;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char*);
		if (str == NULL)
			printf("(nil)");
		else
		{
			if (i < (n - 1) && separator != 0)
				printf("%s", str);
		}
	}
	va_end(arguments);
	printf("\n");
}
