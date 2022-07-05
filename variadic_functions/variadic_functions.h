#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_a_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_char_ptr(char *separator, va_list args);
void print_float(char *separator, va_list args);

/**
 *struct format_types- structures formats
 * @identifier: conversion specifier
 * @args: arguments parameters
 * @separator: elements separator 
 * @f: pointer
 */

typedef struct format_types
{
	char *identifier;

	void (*f)(char *separator, va_list args);

} ptr_all;

#endif
