#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: pointer to char
 * @text_content: pointer to char
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int x_files, f_write;/* to create  variable */

	/* error condition */
	if (filename == NULL)
		return (-1);
	/**
	 * condition for read, write, create, trunc
	 */
	x_files = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (x_files == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	f_write = write(x_files, text_content, strlen(text_content));
	close(x_files);
	if (f_write == -1)
		return (-1);
	return (1);
}
/**
 * _strlen - This function return length of the string.
 * @s: pointer of the string.
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[1] != '\0') /* Tant que index de i != EOF */
	{
		i++; /*incrementer i de 1*/
	}
	return (i); /*retourn i en fin de prog*/
}
