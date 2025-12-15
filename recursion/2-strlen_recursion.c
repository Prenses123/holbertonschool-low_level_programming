#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer to the string
 *
 * Description: uses recursion to count characters until '\0'
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
    /* Base case: if we reach the null terminator '\0', return 0 */
    if (*s == '\0')
        return 0;

    /* Recursive case: 1 + length of the rest of the string */
    return 1 + _strlen_recursion(s + 1);
}
