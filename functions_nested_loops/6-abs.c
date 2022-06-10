#include <stdio.h>
#include <stdlib.h>
/**
*_abs - computes abslotute value of an integer.
*@x: integer
*Return: int.
*/

int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
		return (x);
	}
	else
		return (x);
}

