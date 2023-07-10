#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the name of the text file.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int i = 0;
	size_t printed = 0;
	int fd = 0;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	printed = read(fd, buffer, letters);
	buffer[letters] = '\0';
	for (i = 0; i <= letters; i++)
	{
		putchar(buffer[i]);
	}
	free(buffer);
	close(fd);
	return (printed);
}
