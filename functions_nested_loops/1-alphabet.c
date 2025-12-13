#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if successful
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
    	return (0);
}

void _putchar(c);
print_alphabet()
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
        _putchar(c);
    _putchar('\n');
}
