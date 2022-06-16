#include "main.h"

/**
 * print_triangle - print shape of a triangle
 * with hashtag signs.
 * @size: integer.
 * Retrun: no return.
 */

void print_triangle(int size)
{
	int r;
	int e;
	int c;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (e = 0; e < size; e++)
			{
				c = (size - r) - 1;
				if (e < c)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
