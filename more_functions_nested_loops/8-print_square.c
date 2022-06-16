#include "main.h"

/*
*print_square - make the shape of a square
*with symbol hashtag.
*@i: integer
*@j: integer
*Return:no return.
*/
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
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
