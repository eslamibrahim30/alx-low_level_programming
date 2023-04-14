#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes of the second string
 *
 * Return: the address of the memory which has the two concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int len;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		s = malloc((unsigned int)(strlen(s1)) + n + 1);
		for (i = 0; i < (unsigned int)strlen(s1); i++)
		{
			s[i] = s1[i];
		}
		if (n < (unsigned int)(strlen(s2)))
		{
			len = (unsigned int)(strlen(s1)) + n;
		}
		else
		{
			len = (unsigned int)strlen(s1) + (unsigned int)strlen(s2);
		}
		for (; i < len; i++)
		{
			s[i] = s2[i - (unsigned int)(strlen(s1))];
		}
		s[i] = '\0';
		return (s);
	}
}
