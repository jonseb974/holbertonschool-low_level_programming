#include <stdio.h>
#include <string.h>
/**
 * rev_string - print a string in reverse order
 * @s: pointer tio char
 * Returns: no return
 */
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s);
	int tmp;

	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = tmp;
	}
}
