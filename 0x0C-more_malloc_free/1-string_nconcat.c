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
	unsigned int s1_len;
	unsigned int s2_len;

	s1_len = s1 == NULL ? 0 : strlen(s1);
	s2_len = s2 == NULL ? 0 : strlen(s2);
	if (n < s2_len)
	{
		s2_len = n;
	}
	s = malloc(s1_len + s2_len + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		s[i] = s1[i];
	}
	for (; i < s1_len + s2_len; i++)
	{
		s[i] = s2[i - s1_len];
	}
	s[i] = '\0';
	return (s);
}
