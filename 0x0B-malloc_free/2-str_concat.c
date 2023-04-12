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
	char *s = NULL;
	int i;
	int j;
	int len1;
	int len2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		len1 = s1 == NULL ? 0 : strlen(s1);
		len2 = s2 == NULL ? 0 : strlen(s2);
		s = realloc(s, len1 + len2 + 1);
		j = 0;
		for (i = 0; i < len1; i++)
		{
			s[j] = s1[i];
			j++;
		}
		for (i = 0; i < len2; i++)
		{
			s[j] = s2[i];
			j++;
		}
		s[j] = '\0';
		return (s);
	}
}
