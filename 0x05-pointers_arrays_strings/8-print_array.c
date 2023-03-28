#include "main.h"

/**
 * print_array - Print the elements of an array
 * @a: the given string
 * @n: the number of chars to be printed
 */
void print_array(int *a, int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		printf("%d", *(a + start));
		if (start != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
