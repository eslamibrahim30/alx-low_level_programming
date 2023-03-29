#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: the given string
 *
 * Return: the updated string
 */
char *cap_string(char *s)
{
	int idx;
	int isWord;
	char *separators;
	int i;

	idx = 0;
	separators = " \t\n,;.!?\"(){}";
	if (s[idx] >= 97 && s[idx] <= 122)
	{
		s[idx] -= 32;
	}
	idx++;
	while (s[idx] != '\0')
	{
		isWord = 0;
		for (i = 0; i < 13; i++)
		{
			if (s[idx - 1] == separators[i])
			{
				isWord = 1;
				break;
			}
		}
		if (s[idx] >= 97 && s[idx] <= 122 && isWord)
		{
			s[idx] -= 32;
		}
		idx++;
	}
	return (s);
}
