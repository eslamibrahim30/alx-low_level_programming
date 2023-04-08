#include <stdio.h>

/**
* main - the starting point of the program
* @argc: the number of command line arguments
* @argv: the command line arguments
*
* Return: 0
*/

int main(int argc, char **argv)
{
	if (argv[0] != NULL)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
