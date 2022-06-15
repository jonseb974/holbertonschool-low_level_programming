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

	while (*(s + 1) != '\0')
		i++;
	i--;

	while (i < j)
	{
		tmp = s[i];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
