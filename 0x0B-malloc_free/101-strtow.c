#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * countWords - Counts words in a string
 * @str: the given string
 *
 * Return: the number of words in a string
 */
int countWords(char *str)
{
	int wc;
	int i;
	int isword;

	wc = 0;
	i = 0;
	while (str[i] != '\0')
	{
		isword = 0;
		while (!isspace(str[i]) && str[i] != '\0')
		{
			isword = 1;
			i++;
		}
		if (isword)
		{
			wc++;
		}
		else
		{
			i++;
		}
	}
	return (wc);
}

/**
 * strtow - Splits a string into words
 * @str: the given string
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int wc;
	int cw;
	int i;
	int j;
	int idx;

	wc = countWords(str);
	if (str == NULL || strlen(str) == 0 || wc == 0)
	{
		return (NULL);
	}
	else
	{
		words = (char **)malloc((wc + 1) * sizeof(char *));
		cw = 0;
		for (i = 0; i < (int)(strlen(str)); i++)
		{
			for (j = 0; !isspace(str[i + j]) && str[i + j] != '\0';)
			{
				j++;
			}
			if (j > 0)
			{
				words[cw] = (char *)malloc((j + 1) * sizeof(char));
				idx = 0;
				while (j > 0)
				{
					words[cw][idx] = str[i];
					i++;
					idx++;
					j--;
				}
				words[cw][idx] = '\0';
				cw++;
			}
		}
		words[cw] = NULL;
		return (words);
	}
}
