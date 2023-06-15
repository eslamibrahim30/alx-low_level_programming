#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to be taken from the second string
 *
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size = 0;
	char *concatStrings = NULL;

	size = strlen(s1) + n + 1;
	concatStrings = malloc(size);
	if (concatStrings == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < strlen(s1))
	{
		*(concatStrings + i) = s1[i];
		i++;
	}
	j = 0;
	size = strlen(s2) >= n ? n : strlen(s2);
	while (j < size)
	{
		*(concatStrings + i) = s2[j];
		i++;
		j++;
	}
	*(concatStrings + i) = '\0';
	return (concatStrings);
}
