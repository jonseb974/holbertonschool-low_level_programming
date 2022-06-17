#include "main.h"

/**
 * _strcat - pointer of the funvtion concatenates two strings
 * @dest: pointer of destination
 * @src: pointer of source file
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
		i++;
		for (j = 0; dest[j] != '\0'; j++)
			dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
