#include <stdio.h>
#include <ctype.h>
/**
*print_triangle - print shape of a triangle
*with hashtag signs.
*@size: integer.
*Retrun: no return.
*/
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; i < size; j++)
		{
			putchar(35);
		}
		putchar('/n');
	}
}
