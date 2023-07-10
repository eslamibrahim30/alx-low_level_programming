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
	size_t printed = 0;
	int fd = 0;
	const int SIZE = letters + 1;
	char *buffer = malloc(SIZE);
	unsigned int i;

	if (filename == NULL || buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	printed = read(fd, buffer, letters);
	buffer[SIZE - 1] = '\0';
	i = 0;
	while (buffer[i] != '\0')
	{
		putchar(buffer[i]);
		i++;
	}
	free(buffer);
	return (printed);
}
