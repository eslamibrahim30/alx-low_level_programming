#include "main.h"

/**
 * _strcmp - Compare two given strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if they are qual, +ve if s1>s2 or -ve if s1<s2
 */
int _strcmp(char *s1, char *s2)
{
	int idx1;
	int idx2;

	idx1 = 0;
	idx2 = 0;
	while (s1[idx1] != '\0' && s2[idx2] != '\0')
	{
		if (s1[idx1] != s2[idx2])
		{
			return ((int)(s1[idx1] - s2[idx2]));
		}
		idx1++;
		idx2++;
	}
	if (s1[idx1] != '\0')
	{
		return ((int)(s1[idx1]));
	}
	else if (s2[idx2] != '\0')
	{
		return (-1 * (int)(s2[idx2]));
	}
	else
	{
		return (0);
	}
}
