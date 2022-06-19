#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print two diagonals
 *@a: array.
 *@size: size of the shape.
 *Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum;
	int sumB;

	while (i < (size * size))
	{
		j = *(a + i);
		sum = sum + j;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		j = *(a + i);
		sumB = sumB + j;
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum, sumB);
}
