#include "main.h"
#include <unistd.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
