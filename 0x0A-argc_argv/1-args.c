#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of arguments of the main function
 * @argv: the actual arguments of the main function
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argv != NULL)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
