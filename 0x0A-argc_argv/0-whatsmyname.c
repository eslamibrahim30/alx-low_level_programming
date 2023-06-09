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
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
