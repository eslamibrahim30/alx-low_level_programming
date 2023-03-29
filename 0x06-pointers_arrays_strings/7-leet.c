#include "main.h"

/**
 * leet - Encode a string into 1337
 * @s: the given string
 *
 * Return: the updated string
 */
char *leet(char *s)
{
	char *target_chars;
	char *subs;
	int i;
	int j;

	target_chars = "AEOTL";
	subs = "43071";
	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == target_chars[j] || s[i] == target_chars[j] + 32)
			{
				s[i] = subs[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
