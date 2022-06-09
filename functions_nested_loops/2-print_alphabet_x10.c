#include <stdio.h>
/**
*print_alphabet_x10 - print_alphabet_10x.
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
