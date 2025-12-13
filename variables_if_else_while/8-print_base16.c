#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	float a;

	i = 0;
	a = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
