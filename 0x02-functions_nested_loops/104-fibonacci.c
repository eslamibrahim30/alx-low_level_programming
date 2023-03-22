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

	a = 1.0L;
	b = 2.0L;
	i = 1;
	while (1)
	{
		printf("%0.0Lf", a);
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
		temp = a;
		a = b;
		b =  round(temp) + round(b); 	
	}
	return (0);
}
