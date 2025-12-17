#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	long int result = 0;
	int started = 0;
	int digit;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			digit = *s - '0';

			result = result * 10 + digit;
		}
		else if (started)
			break;

		s++;
	}

	result = sign * result;

	/* int hüdudlarını keçməməsi üçün yoxlama */
	if (result > INT_MAX)
		return (INT_MAX);
	if (result < INT_MIN)
		return (INT_MIN);

	return ((int)result);
}
