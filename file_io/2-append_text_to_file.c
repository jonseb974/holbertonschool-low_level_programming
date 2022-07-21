#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - function that appends
 * text at the end of a file.
 * @filename: pointer to char.
 * @text_content: pointer to an other char.
 * Return: 1 on success and -1 on failure,
 * 1 if the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f1, f2;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	f1 = open(filename, O_RDWR | O_APPEND);
	if (f1 == -1)
		return (-1);
	f2 = write(f1, text_content, strlen(text_content));
	close(f1);
	if (f2 == -1)
		return (-1);


	return (1);
}

/**
 * _strlen - That function return length of the string.
 * @s: pointer
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
