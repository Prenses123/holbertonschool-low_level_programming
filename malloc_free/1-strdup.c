#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a duplicate of the given string in heap memory
 * @str: the string to duplicate
 *
 * Return: pointer to the newly allocated duplicated string,
 *         or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
    char *copy;
    int i, len;

    if (str == NULL)
        return (NULL);

    for (len = 0; str[len] != '\0'; len++)
        ;

    copy = malloc(len + 1);
    if (copy == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        copy[i] = str[i];

    return (copy);
}
