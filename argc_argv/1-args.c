#include <stdio.h>
#include "main.h"
/**
 * main - print number of arguments.
 * @argc: integer
 * @argv: array of char
 * Return: no return.
 */

int main(int argc, char *argv[])
{
	int i;
	argv = argv;

	for (i = 0; i < argc; i++)
		printf("%d\n", (argc - 1));
	return (0);
}
