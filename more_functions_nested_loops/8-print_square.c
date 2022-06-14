#include <stdio.h>
#include <ctype.h>
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

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			putchar (35);
		}
		putchar ('\n');
	}
}
