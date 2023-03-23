#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a_2, a_1;
	unsigned long b_2, b_1;
	unsigned long temp_2, temp_1;
	int i;

	a_1 = 1;
	b_1 = 2;
	a_2 = 0;
	b_2 = 0;
	for (i = 1; i <= 98; i++)
	{
		if (i == 98)
		{
			printf("%lu", a_2);
			printf("%lu", a_1);
			printf("\n");
		}
		else
		{
			if (a_2 != 0)
			{
				printf("%lu%lu, ", a_2, a_1);
			}
			else
			{
				printf("%lu, ", a_1);
			}
			temp_2 = a_2;
			temp_1 = a_1;
			a_2 = b_2;
			a_1 = b_1;
			b_2 = (temp_2 + b_2 + ((temp_1 + b_1) / 10000000000));
			b_1 = (temp_1 + b_1) % 10000000000;
		}
	}
	return (0);
}
