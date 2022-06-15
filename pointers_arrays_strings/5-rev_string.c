#include <stdio.h>
/**
 * rev_string - print a string in reverse order
 *@s: pointer tio char
 *Returns: no return
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] > '\0')
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
