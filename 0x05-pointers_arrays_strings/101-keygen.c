#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	p = 0;
	srand(time(0));
	for (int i = 0; i < 8; i++)
	{
		p *= 10;
		p += rand() % 10;
	}
	printf("%d", p);
	return (0);
}
