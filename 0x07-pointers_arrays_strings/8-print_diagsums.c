#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the square matrix
 * @size: the size of the given square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	j = 0;
	k = size - 1;
	for (i = 0; i < size; i++)
	{
		if (j < size)
		{
			sum1 += *(a + i * size + j);
		}
		if (k >= 0)
		{
			sum2 += *(a + i * size + k);
		}
		j++;
		k--;
	}
	printf("%d, %d\n", sum1, sum2);
}
