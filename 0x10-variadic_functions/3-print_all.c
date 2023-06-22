#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_string - Prints a given string
 * @s: the given string
 */
void print_string(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - Prints any input for the function
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = strlen(format) - 1;
	va_list ap;

	while (format[j] != 'c' && format[j] != 's'
		       && format[j] != 'i' && format[j] != 'f')
		j--;
	va_start(ap, format);
	while (i <= j)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				print_string(va_arg(ap, char *));
				break;
		}
		if (i == j)
		{
			printf("\n");
			break;
		}
		printf(", ");
		i++;
	}
	va_end(ap);
}
