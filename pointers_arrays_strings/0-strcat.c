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

	for (i = 0; src[i] != 0; i++)
	{
		*(dest + i) = *(src + i);
		*(dest + i) = '\0';
		_strcat(dest, src);
	}
	return (dest);
}
