#include "main.h"

/**
 * _strlen - Get the length of the given string
 * @s: the given string address
 * Return: the length of the given string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
