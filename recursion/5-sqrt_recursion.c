#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number.
 * @n: integer.
 * Return: integer.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (carre(n, 1));
}

/**
 * carre - get square
 * @i: integer
 * @car: integer
 * Return: int.
 */

int carre(int car, int i)
{
	if (car == (i * i))
		return (i);
	else if (car > (i * i))
		return (carre(car, i + 1));
	else
		return (-1);
}
