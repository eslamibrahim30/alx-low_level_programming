#include "main.h"

/**
 * _strcpy - Copy source string to a destination string
 * @dest: the destination string
 * @src: the source string
 * return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int start;
	int end;

	end = 0;
	while (*(src + end) != '\0')
	{
		end++;
	}
	start = 0;
	while (1)
	{
		*(dest + start) = *(src + start);
		if (*(src + start) == '\0')
		{
			break;
		}
		start++;
	}
	return (dest);
}
