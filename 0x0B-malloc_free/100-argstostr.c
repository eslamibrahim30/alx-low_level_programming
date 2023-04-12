#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: the actual arguments
 *
 * Return: a pointer to the resulted string
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i;
	int j;
	int len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		len = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; j < (int)(strlen(av[i])); j++)
			{
				len++;
			}
			len++;
		}
		str = realloc(str, len);
		if (str == NULL)
		{
			return (NULL);
		}
		len = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; j < (int)(strlen(av[i])); j++)
			{
				str[len] = av[i][j];
				len++;
			}
			str[len] = '\n';
			len++;
		}
		return (str);
	}
}
