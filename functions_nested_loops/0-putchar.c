#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
	
{
	char str[8]= "_puchar";
	int i;

	for(i=0; str[i]!= 0; i++)
	{
		_putchar(str[i]);
	
	
	}
	_puchar('\n');
	return (0);

}
