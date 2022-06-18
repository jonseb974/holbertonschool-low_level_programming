#include "main.h"
/**
 *_strcmp - compqre two strings.
 *@s1: first string
 *@s2: second string
 *Return:0 if equal, negatice int if s1 < s2,integer if s1> s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int rez;

	while ((*s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			rez = *(s1 + i) - *(s2 + i);
			return (rez);
		}
		else if (*(s1 + i) == *(s2 + i))
		{
			return (0);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			rez = *(s1 + i) - *(s2 + i);
			return (rez);
		}
		i++;
	}
	return (0);
}
