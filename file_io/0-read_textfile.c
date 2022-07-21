#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to the file
 * @letters: integer value.
 * Return:  the actual number of letters it could read and print,
 * if cannot open or read the file, return 0,
 * if filename is NULL return 0, write fails or does not write,
 * the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *stor;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	stor = malloc(sizeof(char) * letters + 1);

	if (stor == NULL)
		return (0);

	rd = read(file, stor, letters);
	if (rd == -1)
		return (0);

	stor[letters] = ('\0');

	wr = write(1, stor, rd);
	if (wr == -1)
		return (0);

	close(file);
	free(stor);
	return (wr);
}
