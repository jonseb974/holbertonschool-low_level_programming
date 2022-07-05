#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_a_char- print char list
 * @args: arguments
 * @separator: parameters
 * Return: no return.
 */

void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_integer - print character
 * @separator: separator of arguments
 * @args: parameter arguments
 * Return: no return.
 */

void print_integer(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_char_ptr - print string
 * @separator: character
 * @args: parametors arguments.
 * Return: no return.
 */

void print_char_ptr(char *separator, va_list args)
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
 * print_a_float - print floats
 * @separator: separator of arguments
 * @args: arguments
 * Return: no return
 */

void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_all - function that prints anything.
 * @format: list
 * Return: no return
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	ptr_all form_types[] = {
		{"c", print_a_char},
		{"i", print_integer},
		{"f", print_a_float},
		{"s", print_char_ptr},
		{NULL, NULL},
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

