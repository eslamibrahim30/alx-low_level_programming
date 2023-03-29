#include "main.h"

/**
 * string_toupper - Convert all lowercase letters in a string to uppercase
 * @s: the given string
 *
 * Return: the updated string
 */
char *string_toupper(char *s)
{
	int idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] >= 97 && s[idx] <= 122)
		{
			s[idx] -= 32;
		}
		idx++;
	}
	return (s);
}
