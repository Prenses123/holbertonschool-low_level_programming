#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	for(i=0; i < 11; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
		_putchar('\n');
}
