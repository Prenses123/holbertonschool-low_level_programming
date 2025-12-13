#include "main.h"

/**
 * _isalpha - checks for lowercase and uppercase character
 * @c: the character to check
 *
 * Return: 1 if c is lowercase and uppercase, 0 otherwise
 */
int _isalpha(int c)

{
	if (c >= 'A' && c < 'z')
		return (1);
	return (0);
}
