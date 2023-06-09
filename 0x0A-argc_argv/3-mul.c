#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of arguments of the main function
 * @argv: the actual arguments of the main function
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
