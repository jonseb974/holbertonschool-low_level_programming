#include "main.h"
/**
* main - print a charactere
* @print the alphabet
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
	
}

