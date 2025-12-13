#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if successful
 */
int main(void)
{
	char z;

	z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}

	putchar('\n');

	return (0);
}
