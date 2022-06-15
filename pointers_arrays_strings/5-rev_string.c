#include <stdio.h>
/**
 * rev_string - print a string in reverse order
 *@s: pointer tio char
 *Returns: no return
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int tmp;

	while (i <j)
	{
		tmp = s[i];
		s[j] = s[i];
		s[i] = tmp;
		putchar(s);
		i++;
		j--;
	}
	putchar('\n');
}
