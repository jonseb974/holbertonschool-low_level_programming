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
		printf("The name of the program is: %s", argv[i]);
	}
	printf("\n");
}
