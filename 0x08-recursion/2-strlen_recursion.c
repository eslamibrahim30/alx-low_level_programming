#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: the given string
 *
 * Return: the number of chars in the given string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
