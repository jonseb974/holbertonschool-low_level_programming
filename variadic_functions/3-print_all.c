#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_int - print integer arguments list
 * @char: arguments
 * @separator: parameters
 * Return: no return.
 */

void print_c(va_list, char)
{
	printf("%c", va_args(c, int));
}

/**
 * print_c - print character
 * @args: arguments
 * @int: character 
 * Return: no return.
 */

void print_int(va_list, int)
{
	printf("%c", va_args(int, int));
}

/**
 * print_char - print string
 * @str: character 
 * @args: parametors arguments.
 * Return: no return.
 */

void print_str(va_args(args, char *))
{
	char *arg = va_args(args, char *);

	if (arg == NULL)
	{
		printf("%s", separator, "(nil)");
		return;
	}
	printf("%s", separator, args);
}

/**
 * print_float - print floats
 * @flottant: float
 * @args: arguments
 * Return: no return
 */

void print_flottant(va_args(flottant, float))
{
	printf("%f", va_args(args, double));
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
		{"c", print_c},
		{"i", print_int},
		{"f", print_flottant},
		{"s", print_str},
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

