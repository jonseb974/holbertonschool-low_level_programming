#include "main.h"
/**
 * _strcmp - get length of prefix substring>
 *@s1: pointer src1
 *@s2: pointer src2
 *Return:int>
 */

int _strcmp(char *s1, char *s2)
{
	int i  = 0;
	int j;
		while (*(s1 + i) != '\0')
		{
			if (*(s1 + i) > *(s2 + i))
			{
				j = *(s1 + i) - *(s2 + i);
			return(j);
			}
			else if (*(s1 + i) < *(s2 + i))
			{
				j = *(s1 + i) - *(s2 + i);
				return (j);
			}
			i++;
		}
	return (0);
}
