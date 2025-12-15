#include <unistd.h>

/* prototype for _putchar */
int _putchar(char c);

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 *
 * Description: uses recursion to print each character of the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
