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
	char c;
	int n;
	float f;
	char *s;
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
				c = va_arg(ap, char);
				printf("%c", c);
				break;
			case 'i':
				n = va_arg(ap, int);
				printf("%d", n);
				break;
			case 'f':
				f = va_arg(ap, float);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				print_string(s);
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
