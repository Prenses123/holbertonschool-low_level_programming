#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size;i++)
		_putchar('#');
	_putchar('\n');
}
