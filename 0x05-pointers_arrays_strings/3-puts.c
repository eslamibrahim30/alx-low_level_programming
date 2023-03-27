#include "main.h"

/**
 * _puts - Prints the given string followed by a new line
 * @str: the given string address
 */
void _puts(char *str)
{
	while (str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
