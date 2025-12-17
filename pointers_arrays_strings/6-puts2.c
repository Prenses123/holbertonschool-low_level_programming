#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: pointer to the string
 */
void puts2(char *str)
{
	int i = 0;
	
	while (s[i] != '\0)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
