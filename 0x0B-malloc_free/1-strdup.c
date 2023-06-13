#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Copies a string to a new allocated memory
 * @str: the string which will be copied
 *
 * Return: a pointer the new allocated memory
 */
char *_strdup(char *str)
{
	char *strCopy;
	char *ptrCopy;
	char *ptrStr;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	ptrStr = str;
	while (1)
	{
		size++;
		ptrStr++;
		if (*ptrStr == '\0')
		{
			break;
		}
	}
	strCopy = (char *)malloc((size + 1) * sizeof(char));
	if (strCopy == NULL)
	{
		return (NULL);
	}
	ptrStr = str;
	ptrCopy = strCopy;
	while (size > 0)
	{
		*ptrCopy = *ptrStr;
		ptrCopy++;
		ptrStr++;
		size--;
	}
	return (strCopy);
}
