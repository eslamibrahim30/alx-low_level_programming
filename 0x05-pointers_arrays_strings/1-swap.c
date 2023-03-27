#include "main.h"

/**
 * swap_int - swap the values of two variables
 * @a: the first variable address
 * @b: the second variable address
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
