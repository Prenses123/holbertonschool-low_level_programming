#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of the given string in heap memory
 * @str: the string to duplicate
 *
 * Return: pointer to the newly allocated duplicated string,
 *         or NULL if str is NULL or malloc fails
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	new = malloc(len1 + len2 + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new[i] = s1[i];
	for (j = 0; j < len2; j++)
		new[i + j] = s2[j];
	new[i + j] = '\0';
	return (new);
}
