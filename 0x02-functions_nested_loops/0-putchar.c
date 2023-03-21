#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar\n";
        int size = 9, i = 0;
        for(i = 0; i < size; i++)
        {
                _putchar(word[i]);
        }
	return (0);
}
