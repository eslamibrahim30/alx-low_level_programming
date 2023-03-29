#include "main.h"

/**
 * reverse_array - Reverse a given array
 * @a: the given array
 * @n: the size of the given array
 */
void reverse_array(int *a, int n)
{
	int start;
	int tmp;

	start = 0;
	n--;
	while (start < n)
	{
		tmp = *(a + start);
		*(a + start) = *(a + n);
		*(a + n) = tmp;
		start++;
		n--;
	}
}
