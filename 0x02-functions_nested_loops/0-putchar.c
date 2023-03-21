#include "main.h"
#include <unistd.h>

/**
 * Print_text
 *
 * Return: void
 *
 * use: print text "_putchar\n"
 */
void print_text(void)
{
	char word[] = "_putchar\n";
        int size = 9, i = 0;
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
