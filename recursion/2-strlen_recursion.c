#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
    // Base case: if we reach the null terminator '\0', the length is 0
    if (*s == '\0')
        return 0;

    // Recursive case: 1 (current character) + length of the rest of the string
    return 1 + _strlen_recursion(s + 1);
}
