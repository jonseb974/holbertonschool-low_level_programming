#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_binary - binary number.
 * @n: number
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
		_putchar((n & 1) +'0');
	}
}
