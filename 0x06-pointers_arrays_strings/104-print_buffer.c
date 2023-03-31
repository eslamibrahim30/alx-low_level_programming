#include "main.h"

/**
 * print_buffer - Print a buffer
 * @b: the given buffer
 * @size: the number of bytes of the buffer
 */
void print_buffer(char *b, int size)
{
	int i = 0;
	int j = 0;
	int c = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		j = i;
		printf("%08x:", i);
		c = 10;
		while (c > 0)
		{
			if (c % 2 == 0)
			{
				printf(" ");
			}
			if (i < size)
			{
				printf("%02x", b[i]);
				i++;
			}
			else
			{
				printf("  ");
			}
			c--;
		}
		printf(" ");
		c = 10;
		while (c > 0 && j < size)
		{
			if ((int)(b[j]) >= 32 && (int)(b[j]) <= 126)
			{
				printf("%c", b[j]);
			}
			else
			{
				printf(".");
			}
			c--;
			j++;
		}
		printf("\n");
	}
}
