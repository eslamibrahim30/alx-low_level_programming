#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long double a;
	long double b;
	long double temp;
	int i;

	a = 1;
	b = 2;
	i = 1;
	while (1)
	{
		printf("%.0Lf", a);
		if (i == 98)
		{
			printf("\n");
			break;
		}
		else
		{
			printf(", ");
			i++;
		}
		temp = floorl(a);
		a = floorl(b);
		b = floorl(floorl(b) + floorl(temp));
	}
	return (0);
}
