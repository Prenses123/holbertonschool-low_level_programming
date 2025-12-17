#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int i = 0;
	int len;
	int start;

	/* string-in uzunluğunu tap */
	while (str[i] != '\0')
		i++;

	len = i;

	/* başlanğıc indeksi hesabla */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* ikinci yarını çap et */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
