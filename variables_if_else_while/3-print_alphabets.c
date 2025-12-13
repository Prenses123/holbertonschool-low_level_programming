#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if successful
 */
int main(void)
{
	char a,A;
	a = 'a';
	A = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'A')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
