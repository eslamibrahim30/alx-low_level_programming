#include "main.h"

/**
 * rot13 - Encode a string into rot13
 * @s: the given string
 *
 * Return: the updated string
 */
char *rot13(char *s)
{
	char *target_chars;
	char *subs;
	int i;
	int j;

	target_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	subs = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == target_chars[j])
			{
				s[i] = subs[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
