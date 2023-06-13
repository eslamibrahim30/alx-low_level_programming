#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: the actual arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *args;
	char *ptr;
	int size;
	int i;
	int j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	size = 1;
	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]) + 1;
	}
	args = (char *)malloc(size * sizeof(char));
	if (args == NULL)
	{
		return (NULL);
	}
	ptr = args;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	*ptr = '\0';
	return (args);
}
