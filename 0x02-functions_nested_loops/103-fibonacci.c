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
		sum += a;
		temp = a;
		a = b;
		b = temp + b;
	}
	printf("%d\n", sum);
	return (0);
}
