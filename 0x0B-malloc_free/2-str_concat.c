#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer the new allocated memory,
 * which contains the new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	char *ptrStr;
	char *ptrNew;
	unsigned int size1;
	unsigned int size2;

	size1 = s1 == NULL ? 0 : strlen(s1);
	size2 = s2 == NULL ? 0 : strlen(s2);
	newStr = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}
	ptrNew = newStr;
	ptrStr = s1;
	while (size1 > 0)
	{
		*ptrNew = *ptrStr;
		ptrStr++;
		ptrNew++;
		size1--;
	}
	ptrStr = s2;
	while (size2 > 0)
	{
		*ptrNew = *ptrStr;
		ptrStr++;
		ptrNew++;
		size2--;
	}
	*ptrNew = '\0';
	return (newStr);
}
