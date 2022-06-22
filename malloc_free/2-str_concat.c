#include <stdlib.h>
#include "main.h"
/**
 * str_concat - this function concatenates two strings.
 * @s1: char.
 * @s2: char.
 * Return: string.
 */

char *str_concat(char *s1, char *s2)
{
	char *vide = "";

	char *bon;

	unsigned int i, j, k, l;

	i = j = k = l = 0;

	if (s1 == NULL)
		s1 = vide;
	if (s2 == NULL)
		s2 = vide;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;
	j++;

	bon = malloc((i + j) * sizeof(*bon));

	if (bon == NULL)
		return (NULL);
	while (s1[k] != '\0')
	{
		bon[k] = s1[k];
		k++;
	}
	while (s2[j] != '\0')
	{
		bon[k] = s2[j];
		k++;
		j++;
	}
	return (bon);
}
