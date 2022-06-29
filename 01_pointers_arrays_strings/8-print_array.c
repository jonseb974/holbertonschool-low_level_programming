#include <stdio.h>
#include "main.h"
/**
 * print_array - print an array with space and comma
 *@a: a pointer of int q
 *@n: a pointer of int n
 *Returns: non return
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

