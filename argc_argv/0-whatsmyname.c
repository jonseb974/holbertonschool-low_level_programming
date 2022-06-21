#include <stdio.h>
#include "main.h"

/**
 * main - print program's name
 * @argc: integer
 *@argv: char
 * Return: no return.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
