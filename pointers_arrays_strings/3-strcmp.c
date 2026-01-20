#include "main.h"
#include <stdio.h>
/**
 * int _strcmp - function
 * @s1:first string
 * @s2:second string
 * Return:result
 */
int _strcmp(char *s1, char *s2)
{
	int len1;
	int i = 0;

	if (s1 == NULL || s2 == NULL)
		return (-1);
	while (s1[i] != '\0')
		i++;
	//while (s2[j] != '\0')
               // j++;
	len1 = i;
	//len2 = j;
	for (i = 0; i < len1; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
