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
	ssize_t printed = 0;
	int fd = 0;
	int error = -1;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	printed = read(fd, buffer, letters);
	if (printed == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	while (i < letters)
	{
		error = putchar(buffer[i]);
		if (error == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		i++;
	}
	free(buffer);
	error = close(fd);
	if (error == -1)
		return (0);
	return (printed);
}
