#include "main.h"

/**
 * _memcpy - copies the first n bytes from a given memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the first n bytes of the destination memory area
 *
 * Return: a pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest;
	char *ptr_src;
	unsigned int i;

	ptr_dest = dest;
	ptr_src = src;
	for (i = 0; i < n; i++)
	{
		*(ptr_dest + i) = *(ptr_src + i);
	}
	return (dest);
}
