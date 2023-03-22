#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int temp;
	int i;

	a = 1;
	b = 2;
	for (i = 1; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%d\n", a);
		}
		else
		{
			printf("%d, ", a);
		}
		temp = a;
		a = b;
		b = temp + b;
	}
	return (0);
}
