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
	unsigned int size;

	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}
	size = strlen(s1) + strlen(s2) + 1;
	newStr = (char *)malloc(size * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}
	ptrNew = newStr;
	ptrStr = s1;
	while (*ptrStr != '\0')
	{
		*ptrNew = *ptrStr;
		ptrStr++;
		ptrNew++;
	}
	ptrStr = s2;
	while (*ptrStr != '\0')
	{
		*ptrNew = *ptrStr;
		ptrStr++;
		ptrNew++;
	}
	*ptrNew = '\0';
	return (newStr);
}
