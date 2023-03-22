#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from given number to 98
 * @n: the starting number of counting
 */
void print_to_98(int n)
{
	int add;

	if (n > 98)
	{
		add = -1;
	}
	else
	{
		add = 1;
	}
	while (1)
	{
		if (n == 98)
		{
			printf("%d\n", 98);
			break;
		}
		else
		{
			printf("%d, ", n);
			n = n + add;
		}
	}
}
