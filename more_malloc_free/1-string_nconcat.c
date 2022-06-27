#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 *@s1: string 1.
 *@s2: string 2.
 *@n: integer.
 *
 *Return: pointer, or new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str3;
	char *vide = "";

	unsigned int i, j;

	i = j = 0;

	if (s1 == NULL)
		s1 = vide;
	if (s2 == NULL)
		s2 = vide;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j++;

	if (n >= j)
		n = j;

	str3 = malloc(sizeof(*str3) * n  + (i + 1));

	if (str3 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str3[i] = s1[i];
		i++;
	j++;
	}
	while (s2[j] != '\0' && j < n)
	{
		str3[i] = s2[j];
		i++;
		j++;
	}
	str3[i] = '\0';
	return (str3);
}
