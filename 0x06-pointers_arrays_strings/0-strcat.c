#include "main.h"

/**
 * _strcat - Concatenate source string to a destination string
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the destination string
 */
char *_strcat(char *dest, char *src)
{
	int idx_dest;
	int idx_src;

	idx_dest = 0;
	while (dest[idx_dest] != '\0')
	{
		idx_dest++;
	}
	idx_src = 0;
	while (src[idx_src] != '\0')
	{
		dest[idx_dest] = src[idx_src];
		idx_dest++;
		idx_src++;
	}
	dest[idx_dest] = '\0';
	return (dest);
}
