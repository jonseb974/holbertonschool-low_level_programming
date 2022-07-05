#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list, char);
void print_intg(va_list, intg);
void print_str(va_args(args, char *));
void print_flottant(va_args(flottant, float));

/**
 *struct format_types- structures formats
 * @identifier: conversion specifier
 * @f: pointer
 */

typedef struct format_types
{
	char *identifier;

	void (*f)(char *separator, va_list args);

} ptr_all;

#endif
