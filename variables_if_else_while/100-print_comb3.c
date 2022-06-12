#include <stdio.h>
/**
*main - print combination od two digits.
*
*
*
*Return:0
*/

int main()
{
	int j = 48;
	int k;
	int c = 44;

	while (j <= 57)
	{
		k = j + 1;

		while (j <= 57)
		{
			putchar(j);
			putchar(k);
			if (j != 57 || k != 57)
			{
				putchar(c);
				putchar(32);
			}
			{
				j++;
			}
			{
				k++;
			}
			{
				putchar('\n');

			}
		}
		return (0);
	}
}
