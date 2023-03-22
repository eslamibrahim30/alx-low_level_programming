#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int temp;

	a = 1;
	b = 2;
	for (; a <= 4000000;)
	{
		if (b >= 4000000 && a % 2 == 0)
		{
			printf("%lu\n", a);
		}
		else if (a % 2 == 0)
		{
			printf("%lu, ", a);
		}
		temp = a;
		a = b;
		b = temp + b;
	}
	return (0);
}
