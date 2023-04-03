#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: the address of the string that would be checked
 * @accept: the address of the string which contains the considered chars
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int idx_s;
	int idx_accept;
	int found;

	idx_s = 0;
	while (*(s + idx_s) != '\0')
	{
		idx_accept = 0;
		found = 0;
		while (*(accept + idx_accept) != '\0')
		{
			if (*(s + idx_s) == *(accept + idx_accept))
			{
				found = 1;
				break;
			}
			idx_accept++;
		}
		if (found == 1)
		{
			return (s + idx_s);
		}
		else
		{
			idx_s++;
		}
	}
	return (0);
}
