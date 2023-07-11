#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file with a content.
 * @filename: the name of the file.
 * @text_content: the content of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t written = 0;
	size_t count = 0;
	unsigned int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != '\0')
	{
		count++;
		i++;
	}
	written = write(fd, text_content, count);
	if (written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
