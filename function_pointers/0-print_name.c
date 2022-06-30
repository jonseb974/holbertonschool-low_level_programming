#include <stdio.h>

/**
 * print_name - print name
 * @name: char
 * @f: pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
