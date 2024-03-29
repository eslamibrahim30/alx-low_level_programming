#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * error_ - Displays a specified error message.
 * @c: the code of the error message.
 * @av: the arguments of the main.
 * @fd_from: the file descriptor of the first file.
 * @fd_to: the file descriptor of the second file.
 * @buffer: a pointer to the buffer.
 *
 * Return: the code of the exit.
 */
int error_(int c, char **av, int fd_from, int fd_to, char **buffer)
{
	if (*buffer != NULL)
		free(*buffer);
	if (c == 1)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	if (c == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	if (c == 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		return (99);
	}
	if (c == 4 || c == 5)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				c == 4 ? fd_from : fd_to);
		return (100);
	}
	return (-1);
}

/**
 * main - Entry point
 * @ac: the number of arguments of the main function
 * @av: the actual arguments of the main function
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	int fd_from = -1;
	int fd_to = -1;
	int error = -1;
	char *buffer = NULL;
	ssize_t nbytes_read = -1;
	ssize_t nbytes_written = -1;

	if (ac != 3)
		exit(error_(1, av, fd_from, fd_to, &buffer));
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		exit(error_(2, av, fd_from, fd_to, &buffer));
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		exit(error_(3, av, fd_from, fd_to, &buffer));
	buffer = malloc(1024);
	while (nbytes_read != 0)
	{
		nbytes_read = read(fd_from, buffer, 1024);
		if (nbytes_read == -1)
			exit(error_(2, av, fd_from, fd_to, &buffer));
		nbytes_written = write(fd_to, buffer, nbytes_read);
		if (nbytes_written == -1 || nbytes_read != nbytes_written)
			exit(error_(3, av, fd_from, fd_to, &buffer));
	}
	error = close(fd_from);
	if (error == -1)
		exit(error_(4, av, fd_from, fd_to, &buffer));
	error = close(fd_to);
	if (error == -1)
		exit(error_(5, av, fd_from, fd_to, &buffer));
	free(buffer);
	return (0);
}
