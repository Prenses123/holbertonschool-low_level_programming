#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int i = 0;
	int n = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		for (n = i / 2;n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (i + 1) / 2; n < i; n++)
			_putchar(str[n]);
		_putchar('\n');
	}
}
