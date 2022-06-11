#include <stdio.h>
/**
*print_to_98 - prints numbers from n to 98.
*@i: input number
*
*Return: no return
*/
void print_to_98(int i)
{
	while  (i < 98 )
	{
		printf("%d, ", i);
		i++;
		if (i > 98)
		{
			printf("%d, ", i);
		}
		{
			if (i == 98)
				printf("%d\n", i);
		}
	}
}
