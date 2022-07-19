#include <stdio.h>
#include <math.h>
#include <string.h>
#include "main.h"
/**
 * _pow_recursion - calulation of power
 * @x: number
 * @y: number
 * Return: output value.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

/**
 * print_binary - binary number.
 * @n: number
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	unsigned int power = 0;
	int expo = 10;
	int flag = 0;

	if (n == 0)
	_putchar(0);
	while (expo >= 0)
	{
		power = _pow_recursion(2, expo);
		if (n >= power)
		{
			_putchar('1');
			n -= power;
			flag = 1;
		}
		else if (n < power && flag == 1)
		{
			_putchar('0');
		}
		expo--;
	}
}
