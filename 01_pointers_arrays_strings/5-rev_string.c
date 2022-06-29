#include "main.h"

/**
 * rev_string - print a string in reverse order
 * @s: pointer tio char
 * Returns: no return
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int tmp;

	while (*(s + i) != '\0')
		i++;
	i--;

	{
		while  (j < i)
		{
			tmp = s[i];
			s[i] = s[j];
			s[j] = tmp;
			j++;
			i--;
		}
	}
}
