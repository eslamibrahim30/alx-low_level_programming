#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - Entry point
 * @ac: the number of arguments of the main function
 * @av: the actual arguments of the main function
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	int fd_from = 0;
	int fd_to = 0;
	int error = 0;
	char *buffer = NULL;
	ssize_t nbytes = 0;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	buffer = malloc(1024);
	do {
		nbytes = read(fd_from, buffer, 1024);
		if (nbytes == -1)
		{
			free(buffer);
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		nbytes = write(fd_to, buffer, nbytes);
		if (buffer[nbytes - 1] == '\0')
			break;
		if (nbytes == -1)
		{
			free(buffer);
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (nbytes > 0);
	free(buffer);
	error = close(fd_from);
	if (error == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_from);
		exit(100);
	}
	error = close(fd_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_to);
		exit(100);
	}
	return (0);
}
