#include "main.h"

/**
 * _strncpy - Copy n bytes from source string to a destination string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes taken from source string
 *
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int idx_dest;
	int idx_src;

	idx_dest = 0;
	idx_src = 0;
	while (dest[idx_dest] != '\0' && n > 0)
	{
		if (src[idx_src] == '\0')
		{
			dest[idx_dest] = 0;
			idx_dest++;
		}
		else
		{
			dest[idx_dest] = src[idx_src];
			idx_dest++;
			idx_src++;
		}
		n--;
	}
	return (dest);
}
