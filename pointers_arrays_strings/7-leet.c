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
	char start = "aAeEoOlLtT";
	char *end = "4433001177";

	while (*(s + l) != '\0')
	{
		while (*(start + j) != '\0')
		{
			if (*(s + i) == *(start + j))
				*(s + i) = *(end + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
