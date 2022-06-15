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
	int c;
	int r;
	int e;

	if(size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (e = 0; e <= size; e++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
