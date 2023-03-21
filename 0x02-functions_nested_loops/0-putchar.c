#include "main.h"
#include <unistd.h>

/**
 * print_text - print string "_putchar\n"
 */
void print_text(void)
{
	char* word;
	word = "_putchar\n";
        int size;
	size = 9;
	int i;
	i = 0;
        for (i = 0; i < size; i++)
        {
                _putchar(word[i]);
        }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_text();
	return (0);
}
