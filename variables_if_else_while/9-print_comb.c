#include <stdio.h>
/**
 *main - print possible combinations od a digit.
 *numbers separated with space & comma
 *ascending order.
 *Return:0
 */

int main(void)
{
	int n = 48;
	int m = 44;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(m);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
