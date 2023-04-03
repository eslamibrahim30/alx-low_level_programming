#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the address of the memory area to be filled
 * @b: the constant byte to be used
 * @n: the first n bytes of the given memory area
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;
	unsigned int i;

	ptr = s;
	for (i = 0; i < n; i++)
	{
		*(ptr + i) = b;
	}
	return (s);
}
