#include "main.h"
/**
 * leet - encodes string in 1337.
 * @s: Pointer.
 * Return: char
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *k = "aAeEoOlLtT";
	char *l = "4433001177";

	while (*(k + l) != '\0')
	{
		while (*(k + j) != '\0')
		{
			if (*(s + i) == *(k + j))
				*(s + i) = *(l + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
