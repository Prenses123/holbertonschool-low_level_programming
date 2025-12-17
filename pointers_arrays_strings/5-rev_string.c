#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int i = 0;
	char temp;
	int j = 0;
	while (s[i] != '\0')
		i++;

	i = i-1;

	while (j < i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
		i--;
	}
}
