#include <stdio.h>
/**
*main - print combination od two digits.
*Return:0
*/

int main(void)
{
	int n = 48;
	int k;
	int m = 44;

	while (n <= 57)
		k = n + 1;
	{
		putchar(n);
		putchar(k);
		if (n != 57 || k <= 57)
		{
			putchar(m);
			putchar(32);
		}
		n++;
		k++;
	}
	putchar('\n');
	return (0);
}

