#include <string.h>
#include <stdio.h>
/**
*_putchar-print a string
*
*
*Returns: no return>
*/

void _puts(char *str)
{
	fputs(*str, stdout);
	putchar();
	return (0);
}
