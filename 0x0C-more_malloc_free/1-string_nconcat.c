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
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *concatStrings = NULL;

	size1 = s1 == NULL ? 0 : strlen(s1);
	size2 = s2 == NULL ? 0 : strlen(s2);
	size2 = n >= size2 ? size2 : n;
	concatStrings = malloc(size1 + size2 + 1);
	if (concatStrings == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size1)
	{
		*(concatStrings + i) = s1[i];
		i++;
	}
	j = 0;
	while (j < size2)
	{
		*(concatStrings + i) = s2[j];
		i++;
		j++;
	}
	*(concatStrings + i) = '\0';
	return (concatStrings);
}
