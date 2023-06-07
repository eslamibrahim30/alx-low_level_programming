#include "main.h"
#include <string.h>

/**
 * check_palindrome - Checks if a string is palindrome using iterators
 * @s: the given string
 * @start: the first iterator
 * @end: the second iterator
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*(s + start) != *(s + end))
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is palindrome
 * @s: the given string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (check_palindrome(s, 0, strlen(s) - 1));
}
