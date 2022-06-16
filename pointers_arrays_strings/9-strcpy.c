#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 *@dest: pointer of destination array where the content
 *is to be copied
 *@src: string to be copied
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
		*(dest + i) = '\0';
		return (dest);
}
