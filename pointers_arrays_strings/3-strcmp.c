#include "main.h"
/**
 * int _strcmp - function
 * @s1:first string
 * @s2:second string
 * Return:result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
                j++;
	int len1 = i;
	int len2 = j;
	if (len1 != len2)
	{
		if (len1 > len2)
			return (1);
		else
			return (-1);
	}
	for (i = 0; i < len1; i++)
	{
		if (s1[i] != s2[i])
			return (1);
	}
	return (0);
}
