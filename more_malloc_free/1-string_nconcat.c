#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to take from s2
 *
 * Return: pointer to newly allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *new;
	int i, j;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 != '\0')
		len1++;
	while (s2 != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	new = malloc((char) * (len1 + n + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new[i] = s1[i];
	for (j = 0; j < len2; j++)
		new[i + j] = s2[j];

 	new[i + j] = '\0';

	return (new);
}
