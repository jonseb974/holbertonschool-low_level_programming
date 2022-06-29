#include <stdio.h>
/**
 *reset_to_98 - update the value of a pointer
 *it point to to 98.
 *@n: an integer
 *Returns: no return.
 */

void reset_to_98(int *n)
{
	int tmp;

	tmp  = 98;
	*n = tmp;
}

