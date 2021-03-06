#include "main.h"
/**
 * cap_string - capitalized words of string
 * @s: pointer
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (i == 0 && (*(s + i) >= 97 && *(s + i) <= 122))
		{
			*(s + i) = *(s + i) - 32;
			i++;
		}
		if (*(s + i) == 32 || *(s + i) == '\n' || *(s + i) == '\t'
			       || *(s + i) == ',' || *(s + i) == ';'
			       || *(s + i) == '?' || *(s + i) == '"')
		{
			i++;
			if (*(s + i) >= 97 && *(s + i) <= 122)
			{
				*(s + i) = *(s + i) - 32;
			}
		}
		else
			i++;
	}
	return (s);
}
