#include "main.h"
/**
 * _pow_recursion - return the value of two parameters.
 *@x: integer.
 *@y: integer.
 *Return: integer.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
