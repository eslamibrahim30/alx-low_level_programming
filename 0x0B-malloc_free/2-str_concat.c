#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *s = malloc(strlen(s1) + strlen(s2) == 0 ?
			0 : strlen(s1) + strlen(s2) + 1);
	int i;
	int j;

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		j = 0;
		for (i = 0; i < (int)(strlen(s1)); i++)
		{
			s[j] = s1[i];
			j++;
		}
		for (i = 0; i < (int)(strlen(s2)); i++)
		{
			s[j] = s2[i];
			j++;
		}
		s[j] = '\0';
		return (s);
	}
}
