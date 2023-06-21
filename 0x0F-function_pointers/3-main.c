#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: the number of arguments of the main function
 * @argv: the actual arguments of the main function
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ((*operator)(a, b)));
	return (0);
}
