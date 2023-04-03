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
	char *ptr;
	unsigned int i;

	ptr = s;
	i = 0;
	while (*(ptr + i) != '\0')
	{
		if (*(ptr + i) == c)
		{
			return (ptr + i);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
