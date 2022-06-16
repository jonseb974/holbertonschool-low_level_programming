#include "main.h"

/**
 * print_square - make the shape of a square
 * with symbol hashtag.
 * @size: is the size of the square
 * Return:no return.
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar (35);
			}
		putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
