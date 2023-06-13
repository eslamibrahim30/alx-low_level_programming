#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * free_space - Frees a 2 dimensional grid previously created
 * @grid: a pointer to the grid to be freed
 * @height: the height of that grid
 */
void free_space(char **grid, unsigned int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}

/**
 * count_words - Counts the words in a string
 * @str: the given string
 *
 * Return: the number of words in the given string
 */
unsigned int count_words(char *str)
{
	unsigned int nWords;
	unsigned int i;

	nWords = 0;
	i = 0;
	while (i < strlen(str))
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				i++;
			}
			nWords++;
		}
		i++;
	}
	return (nWords);
}

/**
 * strtow - Splits a string into words
 * @str: the given string
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	char **arr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int wordSize = 0;
	unsigned int cWord = 0;
	unsigned int nWords = 0;

	nWords = count_words(str);
	if (str == NULL || strlen(str) == 0 || nWords == 0)
		return (NULL);
	arr = (char **)malloc((nWords + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (i < strlen(str) && cWord < nWords)
	{
		if (str[i] != ' ')
		{
			j = i;
			wordSize = 0;
			while (str[i] != ' ' && i < strlen(str))
			{
				wordSize++;
				i++;
			}
			arr[cWord] = (char *)malloc((wordSize + 1) * sizeof(char));
			if (arr[cWord] == NULL)
			{
				free_space(arr, cWord);
				return (NULL);
			}
			for (k = 0; k < wordSize; k++)
				arr[cWord][k] = str[j + k];
			arr[cWord][wordSize] = '\0';
			cWord++;
		}
		i++;
	}
	arr[cWord] = NULL;
	return (arr);
}
