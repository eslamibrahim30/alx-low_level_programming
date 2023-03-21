#ifndef MAIN_H_
#define MAIN_H_
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print()
{
	char word[] = "_putchar\n";
	int size = 9, i = 0;
	for(i = 0; i < size; i++)
	{
		_putchar(word[i]);
	}
}
#endif
