#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * copy_file - copies the content of a file to another file.
 * @src: source file of data.
 * @dest: destination file.
 * Return: error message if no success.
 */

void copy_file(const char *src, const char *dest);

/**
 * main - copie file data into an other file
 * @argv: input data
 * @argc: int
 * Return: ...
 */
int main(int argc, char *argv[])
{
	if (argc != 3) /**/
	{
		dprintf(STDERR_FILENO, "Usage: file_from file_to\n");
			exit(97); /* exit & error message */
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}
/**
 * copy_file - copies the content of a file to another file.
 * @src: source file of data.
 * @dest: destination file.
 * Return: error message if no success.
 */
void copy_file(const char *src, const char *dest)
{
	int o_file, d_file, ok_file;
	char buffer[1024]; /* size of data */

	o_file = open(src, O_RDONLY);
	if (!src || o_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	d_file = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((ok_file = read(o_file, buffer, 1024)) > 0)
	{
		if (write(d_file, buffer, ok_file) != ok_file || d_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (ok_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(o_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_file);
		exit(100);
	}

	if (close(d_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d_file);
		exit(100);
	}
}

