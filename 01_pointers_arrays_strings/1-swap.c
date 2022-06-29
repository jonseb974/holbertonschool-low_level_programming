#include <stdio.h>
/**
*swap_int - swap the value of two variables
*@a: interger
*@b: integer
*Retuns : no return.
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
