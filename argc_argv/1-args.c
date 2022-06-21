#include <stdio.h>
#include "main.h"
/**
 * main - print number of arguments.
 * @argc: integer
 * @argv: array of char
 *Return: no return.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%d %s\n", i, argv[i]);
	}
}
