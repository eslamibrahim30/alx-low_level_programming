#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i;
	long int target;

	target = 612852475143;
	while (target % 2 == 0)
	{
		target /= 2;
	}
	for (i = 3; i <= target; i += 2)
	{
		while (target % i == 0)
		{
			target /= i;
		}
		if (target == 1)
		{
			printf("%ld\n", i);
			break;
		}
	}
	return (0);
}
