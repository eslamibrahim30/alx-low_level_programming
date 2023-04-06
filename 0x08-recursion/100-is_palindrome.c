#include "main.h"
#include <string.h>

/**
 * check_palindrome - Checks if a string is palindrome
 * @s: the given string
 * @i: the starting pointer
 * @j: the ending pointer
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int check_palindrome(char *s, unsigned int i, unsigned int j)
{
	if (i == j || i + 1 == j)
	{
		return (*(s + i) == *(s + j));
	}
	else if (*(s + i) != *(s + j))
	{
		return (0);
	}
	else
	{
		return (check_palindrome(s, i + 1, j - 1));
	}
}

/**
 * is_palindrome - Checks if a string is palindrome
 * @s: the given string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s, 0, strlen(s) - 1));
	}
}
