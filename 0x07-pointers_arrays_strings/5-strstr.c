#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the address of the string that should be searched in
 * @needle: the substring that should be looked for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;
	int idx;
	int found;

	ptr = haystack;
	while (*ptr != '\0')
	{
		idx = 0;
		found = 1;
		while (*(needle + idx) != '\0')
		{
			if (*(ptr + idx) == '\0')
			{
				found = 0;
				break;
			}
			else if (*(ptr + idx) != *(needle + idx))
			{
				found = 0;
				break;
			}
			else
			{
				idx++;
			}
		}
		if (found == 1)
		{
			return (ptr);
		}
		else
		{
			ptr++;
		}
	}
	return (0);
}
