#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the address of the string
 * @c: the char to be located
 *
 * Return: a pointer to the first occurrence of the char
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (1)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else if (*(s + i) == '\0')
		{
			break;
		}
		else
		{
			i++;
		}
	}
	return (0);
}
