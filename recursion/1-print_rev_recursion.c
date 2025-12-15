#include <unistd.h>

/* prototype for _putchar */
int _putchar(char c);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 *
 * Description: uses recursion to print the string backwards
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
