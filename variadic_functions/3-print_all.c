#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list
 * Reurn: no return
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	form_type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_s},
	};

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_type[j].identifier)
			{
				form_type[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_int - print integer arguments list
 * @args: arguments
 * @separator: parameters
 * Return: no return.
 */

void print_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_c - print character
 * @args: arguments
 * @separator: character separator.
 * Return: no return.
 */

void print_c(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_char - print string
 * @separator: character separator
 * @args: parametors arguments.
 * Return: no return.
 */

void print_char(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}

/**
 * print_float - print floats
 * @separator: float
 * @args: arguments
 * Return: no return
 */

void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}
