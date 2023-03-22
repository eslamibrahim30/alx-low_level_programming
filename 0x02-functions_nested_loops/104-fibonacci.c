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
	int i;

	a = 1;
	b = 2;
	for (i = 1; i <= 98;)
	{
		if (i == 98 && (a % 10 == 1 || b % 10 == 2))
		{
			printf("%lu\n", a);
			i++;
		}
		else if (a % 10 == 1 || b % 10 == 2)
		{
			printf("%lu, ", a);
			i++;
		}
		temp = a;
		a = b;
		b = temp + b;
	}
	return (0);
}
