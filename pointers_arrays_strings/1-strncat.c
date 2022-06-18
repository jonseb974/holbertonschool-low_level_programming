#include "main.h"

/**
 *_strncat - concatanes two string in dest.
 *@dest: string we want to append.
 *@src: string from which 'n' characters are going to append.
 *@n: maximun characters to be append.
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenD = 0;
	int lenS = 0;

	while (*(dest + lenD) != '\0')
		lenD++;

	while (*(src + lenS) != '\0')
	{
		if (lenS < n)
		{
			*(dest + lenD) = *(src + lenS);
			lenD++;
		}
		lenS++;
	}
	return (dest);
}
