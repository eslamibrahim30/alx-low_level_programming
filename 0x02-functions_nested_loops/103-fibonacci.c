#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum;
	unsigned long int a;
	unsigned long int b;
	unsigned long int temp;

	a = 1;
	b = 2;
	for (; a <= 4000000;)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		temp = a;
		a = b;
		b = temp + b;
	}
	printf("%lu\n", sum);
	return (0);
}
